#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#define LL long long
using namespace std;
int seive[1000001];
vector<LL> prime;
bool is_prime(LL n){
    int i=0;
    while(prime[i]*prime[i]<=n){
        if(n%prime[i]==0)
            return false;
        i++;
    }
    return true;
}
int main() {
    seive[0]=seive[1]=1;
    int i;
    for(i=2;i<=sqrt(1000001);i++){
        if(!seive[i]){
            prime.push_back(i);
            for(int j=i+i;j<1000001;j+=i)
                seive[j]=1;
        }
    }
    while(i<1000001){
        if(!seive[i])
            prime.push_back(i);
        i++;
    }        
    int t;
    cin>>t;
    while(t--){
        LL n,f1,f2,ans;
        cin>>n;
        f1=1;
        while(n/f1){
            if(n%f1==0&&is_prime(n/f1)){
                ans=n/f1;
                break;
            }
            f1++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

