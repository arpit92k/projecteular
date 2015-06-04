#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MOD 1000000007
#define LL long long
using namespace std;
LL ans[501][501];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(int i=0;i<501;i++){
        ans[0][i]=1;
        ans[i][0]=1;
    }
    for(int i=1;i<501;i++)
        for(int j=1;j<501;j++)
            ans[i][j]=(ans[i-1][j]+ans[i][j-1])%MOD;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<ans[n][m]<<endl;
    }
    return 0;
}

