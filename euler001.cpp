#include<iostream>
using namespace std;
int main(){
    int t;
    long long int n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        i=n/3;
        j=(3*i*(i+1))/2;
        i=n/5;
        j+=(5*i*(i+1))/2;
        i=n/15;
        j-=(15*i*(i+1))/2;
        if(n%3==0||n%5==0)
            j-=n;
        cout<<j<<endl;
    }
}
