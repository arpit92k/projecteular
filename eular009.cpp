#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        int a,b,c;
        int ans=-1;
        cin>>n;
        for(int i=1;i*i<n;i++){
            for(int j=i+1;i*i+j*j<n;j++){
                for(int k=1;k*(i*i+j*j)<n;k++){
                    a=k*(j*j-i*i);
                    b=k*(2*i*j);
                    c=k*(i*i+j*j);
                    if(a+b+c==n&&a*b*c>ans)
                        ans=a*b*c;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

