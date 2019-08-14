//https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n,c=0;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=1;i<n;i++){
		if(a[i]<a[i-1]){
			 c+=abs(a[i]-a[i-1]);
			 a[i]=a[i-1];
		}
	}
	cout<<c<<"\n";
	return 0;
}
