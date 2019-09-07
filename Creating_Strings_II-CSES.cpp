//https://cses.fi/problemset/task/1715/
 
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
    string s;cin>>s;
    ll a[26]={0};
    ll n=s.size();
    ll res=c[n];
    for(ll i=0;i<n;i++) a[s[i]-'a']++;
    for(ll i=0;i<26;i++){
        if(a[i]>1)
            res=(res*modinv(c[a[i]]))%m;
    }
    cout<<(res+m)%m<<"\n";
}
 
/*
we just have to calculate n!/cnt(a)!cnt(b)!.....cnt(z)!
obviously if those counts are greater than 1.
to do that we just multiply with modular inverses of those factorials
which has already been pre-computed in c[] array.
*/
