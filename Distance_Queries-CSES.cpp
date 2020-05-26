//https://cses.fi/problemset/task/1135/

#include<bits/stdc++.h>
#define pb(i) push_back(i)
using namespace std;
 
int timer,n,l;
vector<int> tin, tout;
vector<vector<int> > up,adj;
 
void dfs(int v,int p){
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i){
    	up[v][i] = up[up[v][i-1]][i-1];
	}
    for (int u : adj[v]) {
        if (u != p) dfs(u, v);
    }
    tout[v] = ++timer;
} 
bool is_ancestor(int u, int v){
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}
int lca(int u, int v){
    if (is_ancestor(u, v)) return u;
    if (is_ancestor(v, u)) return v;
    for (int i = l; i >= 0; --i){
        if (!is_ancestor(up[u][i], v)) u = up[u][i];
    }
    return up[u][0];
}
void preprocess(int root){
    tin.resize(n);tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}
 
int main(){
	int m,a,b;cin>>n>>m;
	adj.assign(n,vector<int>());
	for(int i=0;i<n-1;i++){
		cin>>a>>b;a--;b--;
		adj[a].pb(b);adj[b].pb(a);
	}
	int dist[n]={0},vis[n]={0};
	queue<int> q;q.push(0);
	dist[0]=0;vis[0]=1;
	while(!q.empty()){
		int node = q.front();q.pop();
		for(int i=0;i<adj[node].size();i++){
			int cur=adj[node][i];
			if(vis[cur]==0){
				vis[cur]=1;
				dist[cur]=dist[node]+1;
				q.push(cur);
			}
		}
	}
	preprocess(0);
	while(m--){
		int a,b;cin>>a>>b;
        a--;b--;
		int c = lca(a,b);
		cout<<dist[a]+dist[b]-(2*dist[c])<<"\n";
	}
}
