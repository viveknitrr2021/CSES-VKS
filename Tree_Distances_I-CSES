//https://cses.fi/problemset/task/1132/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define pb(a) push_back(a);
 
vector<vector<ll> > v;
ll n,A,B;
 
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
 
void find_dia(ll root){
    pair<ll,ll> p1= bfs(root);
    pair<ll,ll> p2=bfs(p1.second);
    A=p1.second;
    B=p2.second;
}
 
void bfs2(ll root,vector<ll> &dist){
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
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    v.resize(n+1);
    for(ll i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        v[a].pb(b);v[b].pb(a);
    }
    find_dia(1);
    vector<ll> dist1(n+1),dist2(n+1);
    bfs2(A,dist1);
    bfs2(B,dist2);
    for(ll i=1;i<=n;i++){
        cout<<max(dist1[i],dist2[i])-1<<" ";
    }
    cout<<"\n";
}
 
/*
The key idea is to take a random node and find a node farthest from it
Than we find farthest node from this newly found node.
We are now on extremities of diameter. Any particular node's farthest node
will be either left extremity or right extremity of the diameter.
*/
