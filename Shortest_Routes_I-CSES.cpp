//https://cses.fi/problemset/task/1671/
 
#include<bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define mp(x,y) make_pair(x,y)
#define pb(i) push_back(i)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const long long int N=100005;
vector<pair<ll,ll>> adj[N];
ll d[N];
ll INF=1e18;
 
void Dijkstra(ll s){
    d[s]=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push(mp(0,s));
    while(!pq.empty()){
        ll v=pq.top().S;
        ll dist=pq.top().F;
        pq.pop();
        if(dist>d[v]) continue;
        for(auto i:adj[v]){
            ll to=i.F;
            ll len=i.S;
            if(len+dist<d[to]){
                d[to]=len+dist;
                pq.push(mp(d[to],to));
            }
        }
    }
}
 
int main(){
    FIO;
    ll n,m,a,b,c;cin>>n>>m;
    while(m--){
        cin>>a>>b>>c;
        adj[a].pb(mp(b,c));
    }
    for(ll i=0;i<N;i++) d[i]=INF;
    Dijkstra(1);
    for(ll i=1;i<=n;i++) cout<<d[i]<<" ";
}
