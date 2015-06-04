#include<iostream>
#include<cstdio>
using namespace std;
int num[10001];
int main(){
    int t,n,k,i,j,nz;
    long long p,mp;
    cin>>t;
    while(t--){
        cin>>n>>k;getchar();
        nz=0;
        p=1;
        for(i=0;i<k;i++){
            num[i]=(getchar()-'0');
            if(num[i])
                p*=num[i];
            else
                nz++;
        }
        if(nz)
            mp=0;
        else
            mp=p;
        while(i<n){
            num[i]=getchar()-'0';
            if(num[i]){
                p*=num[i];
            }
            else{
                nz++;
            }
            if(num[i-k])
                p/=num[i-k];
            else
                nz--;
            if(nz==0&&p>mp)
                mp=p;
            i++;
        }
        cout<<mp<<endl;
    }
    return 0;
}
