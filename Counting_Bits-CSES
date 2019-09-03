//https://cses.fi/problemset/task/1146/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ll n;cin>>n;
    n++;
    ll cnt=n/2;
    ll pat=2;
    while(pat<=n){
        ll pairs = n/pat;
        cnt+=(pairs/2)*pat;
        if(pairs&1) cnt+=n%pat;
        pat=pat*2;
    }
    cout<<cnt<<"\n";
}
 
/*
https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n-set-2/
 
*/
