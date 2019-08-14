//https://cses.fi/problemset/task/1092

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll n;cin>>n;
	vector <ll> v1,v2,v3;
	ll sum=(n)*(n+1)/2;
	if(sum&1){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
		sum=sum/2;
		ll n_s=0;
		for(ll i=1;i<=n;i++){
			if(n_s<sum){
				n_s+=i;
				v1.push_back(i);
			}
			else{
				v2.push_back(i);
			}
		}
		ll f=0;
		if(n_s!=sum){
			f=1;
			ll num=n_s-sum;
			for(ll i=0;i<v1.size();i++){
				if(v1[i]==num){
					v2.push_back(num);
				}
				else v3.push_back(v1[i]);
			}
		}
		cout<<v2.size()<<"\n";
		for(ll i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
		if(f==0){
			cout<<"\n"<<v1.size()<<"\n";
			for(ll i=0;i<v1.size();i++){
				cout<<v1[i]<<" ";
			}
			cout<<"\n";
			return 0;
		}
		cout<<"\n"<<v3.size()<<"\n";
		for(ll i=0;i<v3.size();i++){
			cout<<v3[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
