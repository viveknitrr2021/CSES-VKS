//https://cses.fi/problemset/task/1687/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define pb(i) push_back(i)
 
ll mp[200005][32];
vector<ll> v[200005],dt(200005,0);
ll n,q,a;
 
ll succ(ll x,ll k){
	if(mp[x][k] != 0) return mp[x][k];
	else{
		return mp[x][k] = succ(succ(x,k-1),k-1);	
	}
}

void dfs(ll src,ll par){
	f(i,0,v[src].size()){
		ll node = v[src][i];
		if(node==par) continue;
		dt[node] = dt[src]+1;
		dfs(node,src);
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>q;
	mp[1][0] = 1;
	f(i,2,n+1){
		cin>>a;
		v[i].pb(a);v[a].pb(i);
		mp[i][0] = a;
	}
	dfs(1,0);
	for(ll p=0;p<=32;p++){
		for(ll node=1;node<=n;node++){
			mp[node][p] = succ(node,p);
		}
	}
	
  
	/*for(ll i=0;i<=4;i++){
		cout<<"p is "<<i<<" :: ";
		for(ll node=1;node<=n;node++){
			cout<<mp[node][i]<<" ";
		}
		cout<<"\n";
	}
	f(i,1,n+1) cout<<dt[i]<<" ";
	cout<<"\n";*/
	
  
	while(q--){
		ll x,k,ans;cin>>x>>k;
		ans = x;
		if(dt[x]<k){
			cout<<"-1\n";
			continue;
		}
		f(i,0,32){
			if(k&1){
				ans = mp[ans][i];
			}
			k = k>>1;
		}
		cout<<ans<<"\n";
	}
}
