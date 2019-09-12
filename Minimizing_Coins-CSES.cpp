//https://cses.fi/problemset/task/1634/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ll sz,n;cin>>sz>>n;
    ll a[sz];
    for(ll i=0;i<sz;i++) cin>>a[i];
    ll dp[n+1];
    dp[0]=0;
    for(ll i=1;i<=n;i++) dp[i]=INT_MAX;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<sz;j++){
            if(a[j]<=i){
                ll ans=dp[i-a[j]];
                if(ans!=INT_MAX and ans+1<dp[i]) dp[i]=ans+1;
            }
        }
    }
    if(dp[n]==INT_MAX){
        cout<<"-1\n";
        return 0;
    }
    cout<<dp[n]<<"\n";
}
