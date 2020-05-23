//https://cses.fi/problemset/task/1667/

#include<bits/stdc++.h>
typedef long long ll;
#define vll vector<long long> 
#define f(i,a,b) for(long long i=a;i<b;i++)
#define F first
#define S second
#define pb(i) push_back(i)
#define mp(x,y) make_pair(x,y)
#define all(v)  (v).begin(),(v).end()
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll INF = 1e18;

int main(){
	ll n,m,a,b,t;cin>>n>>m;
	vll v[n+1];vll vis(n+1,0),par(n+1,INF);
	f(i,0,m){
		cin>>a>>b;
		v[a].pb(b);v[b].pb(a);
	}
	queue<ll> q;
	q.push(1); vis[1]=1;
	while(!q.empty()){
		ll cur = q.front();
		q.pop();
		f(i,0,v[cur].size()){
			ll node = v[cur][i];
			if(vis[node] == 0){
				vis[node] = 1;
				par[node] = cur;
				q.push(node);
			}
		}
	}
	if(par[n]==INF){
		cout<<"IMPOSSIBLE\n";
		return 0;
	}
	vll ans;
	while(par[n] != 1){
		ans.pb(n);
		n = par[n];
	}
	ans.pb(n);ans.pb(1);
	reverse(all(ans));
	cout<<ans.size()<<"\n";
	f(i,0,ans.size()) cout<<ans[i]<<" ";
}
