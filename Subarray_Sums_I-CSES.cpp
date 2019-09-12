//https://cses.fi/problemset/task/1660

//general solution
//......................................................

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	ll n,x;cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++)	cin>>a[i];
	map <ll,ll> mp;
	ll c_s=0,counter=0;
	for(ll i=0;i<n;i++){
		c_s+=a[i];
		if(c_s==x) counter++;
		if(mp[c_s-x]!=0) counter+=mp[c_s-x];
		mp[c_s]++;
	}
	cout<<counter<<"\n";
}


//two pointer approach
//.......................................................

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	ll n,x;cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll i=0,j=0,c=0;
	ll sum=a[i];
	while(i<n || j<n){
		if(sum==x){
			c++;j++;
			sum=sum+a[j]-a[i];
			i++;
		}
		else if(sum<x){
			j++;
			sum=sum+a[j];
		}
		else if(sum>x){
			sum=sum-a[i];
			i++;
		}
	}
	cout<<c<<"\n";
}
