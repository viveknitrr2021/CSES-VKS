//https://cses.fi/problemset/task/1732/

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
ll mod = 1e9+7,INF=1e18,ff=0,a,b;

vll z(string s) {
	ll n = s.size();
	vll z(n);
	ll x = 0, y = 0;
		f(i,1,n){
			z[i] = max(0ll,min(z[i-x],(ll)y-i+1));
			while (i+z[i] < n && s[z[i]] == s[i+z[i]]) {
				x = i; y = i+z[i]; z[i]++;
			}
		}
	return z;
}

int main(){
	string s;cin>>s;
    vll v = z(s);ll n = v.size();
    for(ll i=n-1;i>=1;i--){
    	if(v[i]==(n-i)) cout<<v[i]<<" ";
	}
}
