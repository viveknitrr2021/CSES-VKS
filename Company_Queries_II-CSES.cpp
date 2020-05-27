//https://cses.fi/problemset/task/1688/

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
	int m,a,b,x;cin>>n>>m;
	adj.assign(n,vector<int>());
	for(int i=2;i<=n;i++){
		cin>>x;
		a = i;
		b = x;
		a--;b--;
		adj[a].pb(b);adj[b].pb(a);
	}
	preprocess(0);
	while(m--){
		int a,b;cin>>a>>b;
        a--;b--;
		int c = lca(a,b);
		cout<<c+1<<"\n";
	}
}
