//https://cses.fi/problemset/task/1164/

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
    ll n,x,y;cin>>n;
    vector<pair<pair<ll,ll>,ll>> v;
    f(i,0,n){
        cin>>x>>y;
        v.push_back({{x,1},i});//1 for in
        v.push_back({{y+1,-1},i});//-1 for out, y+1 to show it will be vacant on y+1th day
    }
    sort(all(v));
    vll ans(n);set<ll> s;
    f(i,1,n+1) s.insert(i);
    for(auto x:v){
        if(x.F.S==1){
            ans[x.S] = *s.begin();
            s.erase(s.begin());
        }
        else{
            s.insert(ans[x.S]);
        }
    }
    cout<<*max_element(all(ans))<<"\n";
    for(ll x:ans) cout<<x<<" ";
}
