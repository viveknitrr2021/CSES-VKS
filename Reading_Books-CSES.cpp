//https://cses.fi/problemset/task/1631/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;cin>>n;
	ll a,s=0,m=0;
	for(int i=0;i<n;i++){
		cin>>a;
		m=max(m,a);
		s+=a;	
	}
	cout<<max(2*m,s)<<"\n";
}
