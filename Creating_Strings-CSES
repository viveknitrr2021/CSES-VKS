//https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	vector<string> v;
	cin>>s;
	sort(s.begin(),s.end());
	do{
		v.push_back(s);
	}while(next_permutation(s.begin(), s.end()));
	cout<<v.size()<<"\n";
	for(ll i=0;i<v.size();i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}
