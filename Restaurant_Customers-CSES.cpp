//https://cses.fi/problemset/task/1619/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n,a,b;cin>>n;
	map<ll,ll> mp;
	while(n--){
		cin>>a>>b;
		mp[a]++;mp[b+1]--;
	}
	ll sum=0,mx=INT_MIN;
	for(auto i:mp){
		sum+=i.second;
		mx=max(mx,sum);
	}
	cout<<mx<<"\n";
}
