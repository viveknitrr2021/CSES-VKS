//https://cses.fi/problemset/task/1074


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	ll n;cin>>n;
	ll a[n];ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
		sum+=abs(a[i]-a[n/2]);
	}
	cout<<sum<<"\n";
}
