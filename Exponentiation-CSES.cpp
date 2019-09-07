//https://cses.fi/problemset/task/1095/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mod=1000000007;

ll fastmodexp(ll a,ll b){
	ll ans=1;
	while(b>0){
		if(b&1) ans=(ans*a)%mod;
		a=(a*a)%mod;
		b=b>>1;
	}
	return ans;
}
int main(){
	ll n;cin>>n;
	while(n--){
		ll a,b;cin>>a>>b;
		cout<<fastmodexp(a,b)<<"\n";
	}
}
