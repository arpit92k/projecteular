#include<iostream>
using namespace std;
int main(){
    int grid[20][20];
    int i,j,p,mp;
    mp=-1;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            cin>>grid[i][j];
            if(i>2){
                p=grid[i-3][j]*grid[i-2][j]*grid[i-1][j]*grid[i][j];
                mp=p>mp?p:mp;
            }
            if(j>2){
                p=grid[i][j-3]*grid[i][j-2]*grid[i][j-1]*grid[i][j];
                mp=p>mp?p:mp;
            }
            if(i>2&&j>2){
                p=grid[i-3][j-3]*grid[i-2][j-2]*grid[i-1][j-1]*grid[i][j];
                mp=p>mp?p:mp;
            }
            if(j<17&&i>2){
                p=grid[i-3][j+3]*grid[i-2][j+2]*grid[i-1][j+1]*grid[i][j];
                mp=p>mp?p:mp;
            }
        }
    }
    cout<<mp<<endl;
    return 0;
}
