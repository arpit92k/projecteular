#include<iostream>
#include<vector>
#include<cmath>
#define MP 104730
int seive[MP];
using namespace std;
vector<int> primes;
int main(){
    int t,n,p,i,j,rt;
    seive[0]=seive[1]=1;
    for(i=4;i<MP;i+=2){
        seive[i]=1;
    }
    primes.push_back(2);
    rt=sqrt(MP);
    for(i=3;i<=rt;i+=2){
        if(seive[i]==0){
            primes.push_back(i);
            for(j=i+i;j<MP;j+=i){
                seive[j]=1;
            }
        }   
    }
    while(i<MP){
        if(seive[i]==0)
            primes.push_back(i);
        i+=2;
    }
    j=primes.size();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}
