//https://cses.fi/problemset/task/1712/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll fastmodexp(ll a,ll b,ll mod){
    ll ans=1;
    while(b>0){
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}
int main(){
    ll mod=1000000007;
    ll n;cin>>n;
    while(n--){
        ll a,b,c;cin>>a>>b>>c;
        ll y=fastmodexp(b,c,mod-1);
        cout<<fastmodexp(a,y,mod)<<"\n";
    }
}
 
/*
According the Fermat's little
a^(M - 1) = 1 (mod M) if M is a prime.
 
So if we rewrite BC as x*(M-1) + y, then the
task of computing A^B^C becomes A^(x*(M-1) + y)
which can be written as A^(x*(M-1))*A^y.
From Fermat's little theorem, we know A^(x*(M-1)) = 1.
So task of computing A^B^C reduces to computing A^y
 
What is the value of y?
From B^C = x * (M - 1) + y,
y can be written as B^C % (M-1)
 
We can easily use the above theorem such that we can get
A ^ (B ^ C) % M = (A ^ y ) %  M
 
Now we only need to find two things as:-
1. y = (B ^ C) % (M - 1)
2. Ans = (A ^ y) % M

//https://www.geeksforgeeks.org/find-power-power-mod-prime/
*/
