//https://cses.fi/problemset/task/1073/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;cin>>n;
    multiset<ll> s;
    multiset<ll>::iterator it;
    while(n--){
        cin>>x;
        it=s.lower_bound(x+1);
        if(it==s.end()) s.insert(x);
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout<<s.size()<<"\n";
}
