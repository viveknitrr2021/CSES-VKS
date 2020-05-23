//https://cses.fi/problemset/task/1669/

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
vll v[100001];ll n,m,a,b;
vll vis;vll r;

bool dfs(ll u,ll p){
	vis[u]=1;
	r.pb(u);
	f(i,0,v[u].size()){
		ll node = v[u][i];
		if(vis[node]==0){
			if(dfs(node,u)) return true;
		}
		else if(node != p){
			r.pb(node);
			return true;
		}
	}
	r.pop_back();
	return false;
}

int main(){
	cin>>n>>m;
	f(i,0,m){
		cin>>a>>b;
		v[a].pb(b);v[b].pb(a);
	}
	vis.resize(n+1,0);
	f(i,1,n+1){
		if(!vis[i]){
			if(dfs(i,-1)){
				ll g = r[r.size()-1];
				ll id = -1;
				f(i,0,r.size()-1){
					if(r[i] == g){
						id = i;
						break;
					}
				}
				vll ans;
				if(id==-1){
					f(i,0,r.size()) ans.pb(r[i]);
				}
				else{
					f(i,id,r.size()) ans.pb(r[i]);
				}
				cout<<ans.size()<<"\n";
				f(i,0,ans.size()) cout<<ans[i]<<" ";
				return 0;
			}
			r.clear();
		}
	}
	cout<<"IMPOSSIBLE\n";
}
