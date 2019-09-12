//https://cses.fi/problemset/task/1640

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node{
	ll val;ll ind;
};
bool comp(node p,node q){
	return p.val<q.val;
}
int main(){
	ll n;cin>>n;
	ll x;cin>>x;
	node a[n];
	for(ll i=0;i<n;i++){
		ll p;cin>>p;
		a[i].val=p;
		a[i].ind=i+1;
	}
	sort(a,a+n,comp);
	ll i=0,j=n-1,f=0;
	while(i<=j){
		if(i==j){
			cout<<"IMPOSSIBLE\n";
			break;
		}
		else if(a[i].val+a[j].val>x){
			j--;
		}
		else if(a[i].val+a[j].val<x){
			i++;
		}
		else if(a[i].val+a[j].val==x){
			cout<<a[i].ind<<" "<<a[j].ind<<"\n";
			break;
		}
	}
	return 0;
}
