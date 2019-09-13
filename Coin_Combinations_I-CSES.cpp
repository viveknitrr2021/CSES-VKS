//https://cses.fi/problemset/task/1635/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    ll sz,n;cin>>sz>>n;
   
    vector<int> dp(n+1),a(sz);
    for(ll i=0;i<sz;i++) cin>>a[i];
   
    for(int i=1;i<=n;i++){
        for(int j=0;j<sz;j++){
            if(a[j]<=i){
                //whenever coin with same value occur we have to increment 1
                if(i==a[j]) dp[i]++;
               
                //no of ways of making a sum is
                //no of ways for making (sum-current coin value)
                //summing it all , over every possible coin value
                else    dp[i]=(dp[i]+dp[i-a[j]])%1000000007;
            }
        }
    }
    cout<<dp[n]<<"\n";
}
