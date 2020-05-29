//https://cses.fi/problemset/task/1163/

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
 
int main(){
  FIO;
  ll n,m,x,pt,sz;cin>>n>>m;
  set<pair<ll,ll>> s1,s2;
  s1.insert({n,n});s2.insert({n,n});
  while(m--){
    cin>>x;
    auto it = s1.lower_bound({x,0});
    tie(pt,sz) = *it;
    s1.erase(it);
    s1.insert({pt,pt-x});
    s1.insert({x,x-pt+sz});
    s2.erase({sz,pt});
    s2.insert({pt-x,pt});
    s2.insert({x-pt+sz,x});
    pair<ll,ll> p = *--s2.end();
    cout<<p.F<<" ";
  }
}
