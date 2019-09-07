//https://cses.fi/problemset/task/1090

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
	ll n,x;cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ll i=0,j=n-1,count=0;
	while(i<=j){
		if(i==j){
			count++;
			break;
		}
		else if(a[i]+a[j]<=x){
			i++;j--;
			count++;
		}
		else if(a[i]+a[j]>x){
			j--;count++;
		}
	}
	cout<<count<<"\n";
}
