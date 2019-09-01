//https://cses.fi/problemset/task/1081/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll findmax(ll arr[], ll n){ 
    ll high=0; 
    for (ll i=0;i<n;i++)  high=max(high,arr[i]); 
    ll pref[high+1] = {0}; 
    for (ll i=0;i<n;i++) pref[arr[i]]++;  
    ll cnt=0; 
    for (ll i=high;i>=1;i--){ 
        ll j = i; 
        cnt = 0;  
        while (j <= high) { 
            if(pref[j]>=2) return j; 
            else if (pref[j]==1)	cnt++;           
            j+=i; 
            if(cnt==2)	return i; 
        } 
    } 
} 

int main(){
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	cout<<findmax(a,n)<<"\n";
}
