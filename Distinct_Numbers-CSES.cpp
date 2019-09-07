//https://cses.fi/problemset/task/1621

//vks
#include<bits/stdc++.h>
typedef long long ll;
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
int main(){
	FIO;
	ll n;cin>>n;
	map<ll,ll> mp;
	while(n--){
		ll a;cin>>a;
		mp[a]++;
	}
	cout<<mp.size();
	return 0;
}
