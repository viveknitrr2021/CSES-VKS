//https://cses.fi/problemset/task/1722/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll mod=1e9+7;
 
void mul(ll F[2][2],ll M[2][2]){
    ll a=( (F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod )%mod;
    ll b=( (F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod )%mod;
    ll c=( (F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod )%mod;
    ll d=( (F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod )%mod;
    F[0][0]=a;F[0][1]=b;F[1][0]=c;F[1][1]=d;
}
 
void power(ll F[2][2],ll n){
    if(n==0 or n==1) return;
    ll M[2][2] = {{1,1},{1,0}};
    power(F,n/2);
    mul(F,F);
    if(n&1) mul(F,M);
}
 
ll f(ll n){
    ll F[2][2] = {{1,1},{1,0}};
    if(n==0) return 0;
    power(F,n-1);
    return F[0][0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    cout<<f(n)<<"\n";
}
