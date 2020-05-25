//https://cses.fi/problemset/task/1145/

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
	ll n,a;cin>>n;
	multiset<ll> m;
	multiset<ll>::iterator it;
	f(i,0,n) {
		cin>>a;
		it = m.lower_bound(a);
		if(it == m.end()) m.insert(a);
		else{
			m.erase(it);
			m.insert(a);
		}
	}
	cout<<m.size()<<"\n";
}
