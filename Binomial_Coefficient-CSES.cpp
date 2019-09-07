//https://cses.fi/problemset/task/1079/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll m=1000000007;
 
ll c[1000001];
 
ll fastmodexp(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%m;
        b=b>>1;
        a=(a*a)%m;
    }
    return res;
}
 
ll modinv(ll n){
    return fastmodexp(n,m-2);
}
 
void fillc(){
    ll r=1;
    for(ll i=1;i<=1000001;i++){
        r=(r*i)%m;
        c[i]=r;
    }
}
 
int main(){
    fillc();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll r;cin>>r;
        ll a=c[n],b=c[r]*c[n-r]%m;
        ll ans=(a*modinv(b))%m;
        cout<<(ans+m)%m<<"\n";
    }
    return 0;
}
 
/*
As we know nCr is n!/r!(n-r)!
So we calculate numerator and denominator separately
and than multiply the modular inverse of denominator
to the numerator to get the ans.
*/
