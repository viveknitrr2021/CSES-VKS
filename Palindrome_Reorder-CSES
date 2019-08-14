//https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	//g++ -o a2 a2.cpp&a2.exe
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	map <char,ll> mp;
	string s;cin>>s;
	for(ll i=0;i<s.size();i++){
		char c=s[i];
		mp[c]++;
	}
	ll od=0,ev=0;
	for(auto i:mp){
		if(i.second &1) od++;
		else ev++;
	}
	if(od>1){
		cout<<"NO SOLUTION\n";
	}
	else if(od==1 || od==0){
		string str="";
		string strodd="";
		for(auto i:mp){
			if(i.second & 1){
				char c=i.first;
				ll p=i.second;
				while(p--){
					strodd += c;
				}
			}
			else{
				ll p=i.second;
				p=p/2;
				while(p--){
					char c=i.first;
					str+=c;
				}
			}
		}
		cout<<str<<strodd;
		reverse(str.begin(),str.end());
		cout<<str<<"\n";
 
	}
	return 0;
}
