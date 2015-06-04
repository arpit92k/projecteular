#include<iostream>
#include<cstring>
using namespace std;
int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};
int pow[40];
int main(){
    int t,n,i,j,k,p,ans;
    cin>>t;
    while(t--){
        cin>>n;
        memset(pow,0,sizeof(pow));
        for(i=2;i<=n;i++){
            j=0;
            k=i;
            while(k>1){
                p=0;
                while(k%prime[j]==0){
                    p++;
                    k/=prime[j];
                }
                if(p>pow[prime[j]])
                pow[prime[j]]=p;
                j++;
            }
        }
        ans=1;
        for(i=2;i<40;i++){
            while(pow[i]>0){
                ans*=i;
                pow[i]--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
