//https://cses.fi/problemset/task/1623

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll findmin(ll a[],ll n,ll p,ll q){
	if(n==0) return abs(p-q);
	return min( findmin(a,n-1,p+a[n],q) , findmin(a,n-1,p,q+a[n]) );
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll n;cin>>n;
	ll a[n+1];
	for(ll i=1;i<=n;i++) cin>>a[i];
	cout<<findmin(a,n,0,0)<<"\n";
	return 0;
}
