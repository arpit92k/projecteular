#include<iostream>
#include<vector>
#define LL long long
using namespace std;
vector<int> abundant;
LL power(LL n,int p){
	if(p<1)
		return 1;
	LL m=1;
	if(p&1)
		m=n;
	n=power(n,p/2);
	return n*n*m;
}
bool is_abundant(int n){
	LL sum=1;
	int d=2;
	int t=n;
	while(n>1){
		int p=0;
		while(n>1&&n%d==0){
			p++;
			n/=d;
		}
		sum*=((power(d,p+1)-1)/(d-1));
		d++;
	}
	sum-=t;
	return sum>t;
}
int ans[28124];
int main(){
	for(int i=12;i<=28123;i++)
		if(is_abundant(i))
			abundant.push_back(i);
	int l=abundant.size();
	for(int i=0;i<l;i++)
		for(int j=i;j<l;j++)
			if(abundant[i]+abundant[j]<28124)
				ans[abundant[i]+abundant[j]]=1;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n>28123||ans[n])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
