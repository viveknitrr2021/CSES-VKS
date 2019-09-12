//https://cses.fi/problemset/task/1633/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll m=1e9+7;
 
int main(){
    ll n;cin>>n;
    ll dp[n+1]={0};
    dp[0]=dp[1]=1;
    for(ll i=2;i<=n;i++){
        for(ll j=1;j<=6;j++){
            if(i - j >= 0)
                dp[i]= (dp[i]+dp[i-j])%m;
        }
    }
    cout<<dp[n]<<"\n";
}
