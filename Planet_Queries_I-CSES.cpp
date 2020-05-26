//https://cses.fi/problemset/task/1750/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define pb(i) push_back(i)

ll mp[200005][32];
vector<ll> v[200005];
ll n,q,a;

ll succ(ll x,ll k){
	if(mp[x][k] != 0) return mp[x][k];
	else{
		return mp[x][k] = succ(succ(x,k-1),k-1);	
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>q;
	f(i,1,n+1){
		cin>>a;
		v[i].pb(a);
		mp[i][0] = a;
	}
	for(ll p=0;p<=32;p++){
		for(ll node=1;node<=n;node++){
			mp[node][p] = succ(node,p);
		}
	}
	while(q--){
		ll x,k,ans;cin>>x>>k;
		ans = x;
		if(k==0){
			cout<<x<<"\n";
			continue;
		}
		f(i,0,32){
			if(k&1) ans = mp[ans][i];
			k = k>>1;
		}
		cout<<ans<<"\n";
	}
}
