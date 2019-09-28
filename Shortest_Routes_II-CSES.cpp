//https://cses.fi/problemset/task/1672/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
const long long int N=501;
vector<pair<ll,ll>> adj[N];
ll d[N];
ll INF=1e15;
 
void Dijkstra(ll s){
    d[s]=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push(make_pair(0,s));
    while(!pq.empty()){
        ll v=pq.top().second;
        ll dist=pq.top().first;
        pq.pop();
        if(dist>d[v]) continue;
        for(auto i:adj[v]){
            ll to=i.first;
            ll len=i.second;
            if(len+dist<d[to]){
                d[to]=len+dist;
                pq.push(make_pair(d[to],to));
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,q,a,b,c;cin>>n>>m>>q;
    ll adjmat[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            adjmat[i][j]=INF;
        }
    }
    while(m--){
        cin>>a>>b>>c;
        if(c<adjmat[a][b] or c<adjmat[b][a]){
            adjmat[a][b]=c;adjmat[b][a]=c;
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            adj[i].push_back(make_pair(j,adjmat[i][j]));
            adj[j].push_back(make_pair(i,adjmat[j][i]));
        }
    }
    ll ans[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll k=0;k<N;k++) d[k]=INF;
        Dijkstra(i);
        for(ll j=1;j<=n;j++){
            if(d[j]!=INF)   ans[i][j]=d[j];
            else ans[i][j]=-1;
        }
    }
    while(q--){
        cin>>a>>b;
        cout<<ans[a][b]<<"\n";
    }
    return 0;
}
