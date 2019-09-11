//https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
	ll n;cin>>n;
	if(n==1){
		cout<<"1\n";
	}
	else if(n<=3){
		cout<<"NO SOLUTION\n";
	}
	else{
		for(ll i=n;i>=1;i--){
			if(i&1) cout<<i<<" ";
		}
		for(ll i=n;i>=1;i--){
			if(i%2==0) cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
