//https://cses.fi/problemset/task/1138/

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
ll mod = 1e9+7,INF=1e18,a,b,n,q,k,s,x;
 
vll v[200005],BIT(200005,0),sz,vl,pos,ac;
vll r;
 
struct tree{
    ll id,siz;
};
 
void dfs(ll root,ll par){
	f(i,0,v[root].size()){
		ll x = v[root][i];
        if(x == par) continue;
        r.pb(x);
        vl[x] = vl[x] + vl[root];
        dfs(x,root);
        sz[root] += sz[x];
    }
}
 
void update(ll i,ll inc){
    while(i<=n){
        BIT[i]+=inc;
        i+=(i&(-i));
    }
    return;
}
 
ll query(ll i){
    ll ans=0;
    while(i>0){
        ans+=BIT[i];
        i-=(i&(-i));
    }
    return ans;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>q;
    vl.resize(n+1,0);
    ac.resize(n+1,0);
    sz.resize(n+1,1);
    pos.resize(n+1,0);
    f(i,1,n+1){
        cin>>vl[i];
        ac[i] = vl[i];
    }
    f(i,0,n-1){
        cin>>a>>b;
        v[a].pb(b);v[b].pb(a);
    }
    r.pb(1);
    dfs(1,0);
    tree tr[n+1];
    f(i,1,n+1){
        ll node = r[i-1];
        pos[node] = i;
        tr[i].id = node;
        tr[i].siz = sz[node];
    }
    while(q--){
        cin>>k;
        if(k==1)
        {
            cin>>s>>x;
            ll pp = pos[s];
            ll inc = x-ac[s];
            ac[s] = x;
            ll szz = tr[pp].siz;
            update(pp,inc);
            update(pp+szz,-inc);
        }
        else if(k==2){
            cin>>s;
            ll pp = pos[s];
            cout<<query(pp)+vl[tr[pp].id]<<"\n";
        }
    }
}

