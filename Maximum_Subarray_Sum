//https://cses.fi/problemset/task/1643

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll n,f=0,mn=INT_MIN;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
		mn=max(mn,a[i]);
		if(a[i]>0) f=1;
	}
	if(f==0){
		cout<<mn<<"\n";
	}
	else{
		ll m_f=0,m_e=0;
		for(ll i=0;i<n;i++){
			m_f+=a[i];
			if(m_f<0) m_f=0;
			if(m_e<m_f) m_e=m_f;
		}
		cout<<m_e<<"\n";
	}
	return 0;
}
