#include<iostream>
#define LL long long
#define LIMIT 1000001
#define ROOT 1000
using namespace std;
int se[LIMIT];
LL sum[LIMIT];
int main(){
    int t,n,i,j;
    LL ps;
    se[0]=se[1]=1;
    sum[0]=sum[1]=ps=0;
    for(i=2;i<=ROOT;i++){
        if(se[i]==0){
            ps+=i;
            for(j=i+i;j<LIMIT;j+=i)
                se[j]=1;
        }
        sum[i]=ps;
    }
    while(i<LIMIT){
        if(se[i]==0)
            ps+=i;
        sum[i++]=ps;
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
