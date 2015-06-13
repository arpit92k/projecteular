#include<iostream>
#include<cstdio>
#define LIMIT 1001
using namespace std;
int num[LIMIT][50];
int sum[50];
int main(){
    int n,i,j,k,c,s;
    cin>>n;getchar();
    for(i=0;i<n;i++){
        for(j=0;j<50;j++)
            num[i][j]=getchar()-'0';
        getchar();
    }
    s=0;
    for(j=49;j>=0;j--){
        for(i=0;i<n;i++)
            s+=num[i][j];
        sum[j]=s%10;
        s/=10;
    }
    cout<<s;
    c=0;
    while(s>0){
        s/=10;
        c++;
    }
    i=0;
    while(c<10){
        cout<<sum[i++];
        c++;
    }
    cout<<endl;
    return 0;
}
