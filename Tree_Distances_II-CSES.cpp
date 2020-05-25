//https://cses.fi/problemset/task/1133/

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
ll mod = 1e9+7,INF=1e18,a,b,n;

vll v[200005],dist(200005,0),cnt(200005,1);

void dfs1(ll root,ll par){
    for(auto x:v[root]){
        if(x == par) continue;
        dfs1(x,root);
        cnt[root] += cnt[x];
        dist[root] += (dist[x]+cnt[x]);
    }
}

void dfs2(ll root,ll par){
    for(auto x:v[root]){
        if(x == par) continue;
        dist[x] = (dist[root]-2*cnt[x]+n);
        dfs2(x,root);
    }
}

int main(){
	cin>>n;
    f(i,0,n-1){
        cin>>a>>b;
        v[a].pb(b);v[b].pb(a);
    }
    dfs1(1,0);
    dfs2(1,0);
    f(i,1,n+1) cout<<dist[i]<<" ";
}
