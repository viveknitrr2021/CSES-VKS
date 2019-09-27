//https://cses.fi/problemset/task/1072/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
class Knight{
    public:
        ll n;
    void getn(ll p){
        n=p;
    }
    void calculate(){
        for(ll i=1;i<=n;i++){
            ll ans=(i*i)*((i*i)-1)/2;
            ll temp = 4*(i-1)*(i-2);
            cout<<ans-temp<<"\n";
        }
    }
};
 
int main(){
    Knight k;
    ll p;cin>>p;
    k.getn(p);
    k.calculate();
    return 0;
}
