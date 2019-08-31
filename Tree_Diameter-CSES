//https://cses.fi/problemset/task/1131/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define pb(a) push_back(a);
 
vector<vector<ll> > v;
ll n;
 
pair<ll,ll> bfs(ll root){
    vector<int> dist(n+1,0);
    dist[root]=1;
    queue<ll> q;
    q.push(root);
    while(!q.empty()){
        ll node = q.front();
        for(auto i:v[node]){
            if(dist[i]!=0) continue;
            q.push(i);
            dist[i]=dist[node]+1;
        }
        q.pop();
    }
    ll mx=INT_MIN,idx;
    for(ll i=1;i<=n;i++){
        if(mx<dist[i]){
            mx=dist[i];idx=i;
        }
    }
    pair<ll,ll> p = make_pair(mx,idx);
    return p;
}
 
ll find_dia(ll root){
    pair<ll,ll> p1= bfs(root);
    pair<ll,ll> p2=bfs(p1.second);
    return (p2.first-1);
}
 
int main(){
    cin>>n;
    v.resize(n+1);
    for(ll i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        v[a].pb(b);v[b].pb(a);
    }
    cout<<find_dia(1)<<"\n";
}
