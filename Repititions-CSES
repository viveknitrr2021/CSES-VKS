//https://cses.fi/problemset/task/1069/
//vks
#include<bits/stdc++.h>
typedef long long ll;
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
int main(){
	FIO;
	string s;cin>>s;
	string str=s[0]+s;
	ll d=0,mx=0;
	f(i,1,str.length()){
		if(str[i]==str[i-1]){
			d++;
		}
		else{
			d=1;
		}
		mx=max(mx,d);
	}
	cout<<mx<<"\n";
	return 0;
}
