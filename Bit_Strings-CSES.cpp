//https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fastmodexp(ll a,ll b,ll m){
	ll res=1;
	while(b>0){
		if(b&1){
			res=(res*a)%m;	
		}
		a=(a*a)%m;
		b=b>>1;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll n;cin>>n;
	ll mod=1000000007;
	cout<<fastmodexp(2,n,mod)<<"\n";
	return 0;
}
