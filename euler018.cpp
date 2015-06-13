#include<iostream>
#define MAX(a,b) ((a)>(b)?(a):(b))
using namespace std;
int tri[15][15];
int main(){
    int t,n,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>tri[0][0];
        for(i=1;i<n;i++){
            for(j=0;j<=i;j++){
                cin>>k;
                if(j==0)
                    tri[i][j]=k+tri[i-1][j];
                else if(j==i)
                    tri[i][j]=k+tri[i-1][j-1];
                else
                    tri[i][j]=k+MAX(tri[i-1][j-1],tri[i-1][j]);
            }
        }
        k=0;
        for(i=0;i<n;i++){
            k=MAX(k,tri[n-1][i]);
        }
        cout<<k<<endl;
    }
}
