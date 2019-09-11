//https://cses.fi/problemset/task/1649

#include<bits/stdc++.h>
#define ll long long 
#define M 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
 
struct segtree{
	ll x;
};
 
const ll N=200002;
ll A[N];
segtree tree[4*N+1];
 
void build(ll node,ll start,ll end)
{
	if (start==end){
		tree[node].x=A[start];
	}
	else{
		ll mid=(start+end)>>1;
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		tree[node].x=min(tree[2*node+1].x,tree[2*node+2].x);
	}
}
 
void update(ll node,ll start,ll end,ll ind,ll elem)
{
	if (start==end){
		A[ind]=elem;
		tree[node].x=elem;
	}
	else{
		ll mid=(start+end)>>1;
		if (start<=ind && ind<=mid)
			update(2*node+1,start,mid,ind,elem);
		else
			update(2*node+2,mid+1,end,ind,elem);
		tree[node].x=min(tree[2*node+1].x,tree[2*node+2].x);
	}
}
 
 
ll query(ll node,ll start,ll end,ll l,ll r)
{
	if (start>r || end<l){
		return INT_MAX;
	}
	else if (l<=start && r>=end){
		return tree[node].x;
	}
	else{
		ll mid=(start+end)>>1;
		ll q1=query(2*node+1,start,mid,l,r);
		ll q2=query(2*node+2,mid+1,end,l,r);
		return (min(q1,q2));
	}
}
 
 
int main()
{
 	fast;
	ll n,q;
	cin>>n>>q;
	for (ll i=0;i<n;i++)cin>>A[i];
	build(0,0,n-1);	
	for (ll i=0;i<q;i++)
	{
		ll x;
		ll y,z;
		cin>>x>>y>>z;
		if (x==1){
			update(0,0,n-1,y-1,z);
		}
		else{
			cout<<query(0,0,n-1,y-1,z-1)<<'\n';
		}
	}
}
