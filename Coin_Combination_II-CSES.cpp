//https://cses.fi/problemset/task/1636/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    ll n,x,t=0;
    cin>>n>>x;
    vector<ll> c(n),dp(x+1);
    for(ll i=0;i<n;i++) cin>>c[i];
    dp[0]=1;
    while(n--){
        ll p=c[t];
        for(ll i=1;i<=x;i++){
            if(p<=i)    dp[i]=(dp[i]+dp[i-p])%1000000007;
        }
        t++;
    }
    cout<<dp[x]<<"\n";
    return 0;
}
