#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<climits>
#define LL long long
#define INF INT_MAX
#define NINF INT_MIN
#define II(x) scanf("%d",&x)
#define III(x,y) scanf("%d %d",&x,&y)
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
string text[]={
	"Zero",
	"One",
	"Two",
	"Three",
	"Four",
	"Five",
	"Six",
	"Seven",
	"Eight",
	"Nine",
	"Ten",
	"Eleven",
	"Twelve",
	"Thirteen",
	"Fourteen",
	"Fifteen",
	"Sixteen",
	"Seventeen",
	"Eighteen",
	"Nineteen"
};
string text_two(int n){
	if(n==0)
		return "";
	if(n<20)
		return text[n];
	int tens=n/10;
	string ans="";
	switch(tens){
		case 2:
			ans="Twenty";
			break;
		case 3:
			ans="Thirty";
			break;
		case 4:
			ans="Forty";
			break;
		case 5:
			ans="Fifty";
			break;
		case 6:
			ans="Sixty";
			break;
		case 7:
			ans="Seventy";
			break;
		case 8:
			ans="Eighty";
			break;
		case 9:
			ans="Ninety";
	}
	int once=n%10;
	if(once)
		ans.append(" ").append(text[once]);
	return ans;
}
string text_three(int n){
	/*if(n==100)
		return "One Hundred";*/
	int hundreds=n/100;
	string ans="";
	if(hundreds){
		ans=string(text[hundreds]);
		ans.append(" ").append("Hundred ");
	}
	if(n%100)
		ans.append(text_two(n%100));
	return ans;
}
string text_six(int n){
	int thousands=n/1000;
	int hundreds=n%1000;
	string ans="";
	if(thousands)
		ans=text_three(thousands).append(" Thousand ");
	if(hundreds)
		ans.append(text_three(hundreds));
	return ans;
}
string text_nine(int n){
	int millions=n/1000000;
	int thousands=n%1000000;
	string ans="";
	if(millions)
		ans=text_three(millions).append(" Million ");
	if(thousands)
		ans.append(text_six(thousands));
	return ans;
}
string text_twelve(LL n){
	int billions=n/1000000000;
	int millions=n%1000000000;
	string ans="";
	if(billions)
		ans=text_three(billions).append(" Billion ");
	if(millions)
		ans.append(text_nine(millions));
	return ans;
}
string fix(string s){
	int l=s.length();
	int i=0;
	string ans="";
	while(i<l&&s[i]==' ')
	i++;
	bool space=false;
	while(i<l){
		if(s[i]==' '){
			if(!space){
				space=true;
				ans.push_back(' ');
			}	
		}
		else{
			space=false;
			ans.push_back(s[i]);
		}
		i++;
	}
	return ans;
}
int main(){
	int t;
	II(t);
	while(t--){
		LL n;
		cin>>n;
		if(n)
			cout<<fix(text_twelve(n))<<endl;
		else
			cout<<text[0]<<endl;
	}
	return 0;
}
