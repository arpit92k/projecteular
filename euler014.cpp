#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define ASZ 10000000
#define LIMIT 5000001
#define LL long long
using namespace std;
LL cslen[ASZ];
LL maxcslen[LIMIT];
int ans[LIMIT];
LL calcslen(LL n){
    if(n<ASZ&&cslen[n])
        return cslen[n];
    LL len;
    if(n&1)
        len=calcslen(3*n+1);
    else
        len=calcslen(n>>1);
    len++;
    if(n<ASZ)
        cslen[n]=len;
    return len;
}
int main() {
    cslen[1]=1;
    maxcslen[1]=1;
    ans[1]=1;
    for(int i=2;i<LIMIT;i++){
        cslen[i]=calcslen(i);
        if(cslen[i]>=cslen[ans[i-1]])
            ans[i]=i;
        else
            ans[i]=ans[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}