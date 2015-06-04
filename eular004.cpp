#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pals[1000001];
bool ispal(int n){
    int t,r =0;
    t=n;
    while(t){
        r*=10;
        r+=t%10;
        t/=10;
    }
    return (n==r)?true:false;
}
int main(){
    int i,j,n,t;
    for(i=100;i<1000;i++)
        for(j=100;j<1000;j++){
            n=i*j;
            if(ispal(n))
                pals[n]=1;
        }
    cin>>t;
    while(t--){
        cin>>n;
        while(pals[--n]==0);
        cout<<n<<endl;
    }
    return 0;
}
