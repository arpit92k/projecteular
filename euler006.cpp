#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,s1,s2;
    cin>>t;
    while(t--){
        cin>>n;
        s1=(n*(n+1))/2;
        s2=(n*(n+1)*(2*n+1))/6;
        s1=s2-s1*s1;
        s1=s1<0?-s1:s1;
        cout<<s1<<endl;
    }
    return 0;
}
