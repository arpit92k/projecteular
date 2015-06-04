#include<iostream>
#define LL long long
using namespace std;
int main(){
    int t;
    LL ans,a,b,c,n;
    cin>>t;
    while(t--){
        cin>>n;
        ans=a=0;
        b=1;
        while(b<=n){
            if(!(b&1))
            ans+=b;
            c=b;
            b=(b+a);
            a=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
