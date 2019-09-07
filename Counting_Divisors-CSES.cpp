//https://cses.fi/problemset/task/1713

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll a[1000001];

int main(){
	ll n;cin>>n;
	for(ll i=2;i<=1000000;i++){
		ll p=i;
		while(p<=1000000){
			a[p]++;
			p=p+i;
		}
	}
	while(n--){
		ll ask;cin>>ask;
		cout<<a[ask]+1<<"\n";
	}
}
