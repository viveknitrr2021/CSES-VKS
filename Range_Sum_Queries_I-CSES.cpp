//https://cses.fi/problemset/task/1646

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll BIT[200005],n,q;
 
void update(ll i,ll val){
	while(i<=n){
		BIT[i]+=val;
		i+=(i&(-i));
	}
	return;
}
 
ll query(ll i){
	ll ans=0;
	while(i>0){
		ans+=BIT[i];
		i-=(i&(-i));
	}
	return ans;
}
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){
		ll a;cin>>a;update(i,a);
	}
	while(q--){
		ll l,r;cin>>l>>r;
		cout<<query(r)-query(l-1)<<"\n";
	}
	return 0;
}
