#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define NLIMIT 10001
using namespace std;
#define LL long long
int seive[NLIMIT];
vector<int> primes ;
LL ans[1001];
int no_div(LL n){
    int ans=1;
    int i=0;
    int l=primes.size();
    while(i<l&&n>1){
       int c=0;
       while(n>1&&n%primes[i]==0){
           n/=primes[i];
           c++;
       }
       ans*=(c+1);
       i++;
    }
    if(n>1)
        ans*=2;
    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    seive[0]=seive[1]=1;
    int i;
    for(i=2;i<sqrt(NLIMIT);i++){
        if(seive[i]==0){
            primes.push_back(i);
            for(int j=i+i;j<NLIMIT;j+=i)
                seive[j]=1;
        }
    }
    while(i<NLIMIT){
        if(seive[i]==0)
            primes.push_back(i);
        i++;
    }
    LL tnn=2;
    LL tn;
    i=0;
    while(i<1001){
        tn=tnn*(tnn+1);
        tn/=2;
        int nd=no_div(tn);
        while(i<1001&&i<nd)
            ans[i++]=tn;
        tnn++;
    }
    //cout<<tn<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}

