//https://cses.fi/problemset/task/1651

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll BIT[200005];
vector<ll> a(200005);
ll n,q;
void update(ll i,ll inc){
	while(i<=n){
		BIT[i]+=inc;
		i+=(i&(-i));
	}
	return;
}
ll query(ll i){
	ll ans=0,in=i;
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
    	cin>>a[i];
	}
    while(q--){
    	ll t;cin>>t;
    	if(t==1){
			ll l,r,val;cin>>l>>r>>val;
			update(l,val);
			update(r+1,-val);
		}
		else if(t==2){
			ll ind;cin>>ind;
			ll ans=a[ind];
			ll diff=query(ind);
			cout<<ans+diff<<"\n";
		}
	}
	return 0;
}
