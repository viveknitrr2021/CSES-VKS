//https://cses.fi/problemset/task/1666/

#include<bits/stdc++.h>
#define f(i,a,b) for(long long i=a;i<b;i++)
typedef long long ll;
using namespace std;

class Set{
public:
    ll rank;
    ll parent;
    ll val;
};
ll find(Set *set,ll i){
    if(set[i].parent!=i){
        set[i].parent = find(set,set[i].parent);
    }
    return set[i].parent;
}
void Union(Set *set,ll v1,ll v2){
    ll v1_root = find(set,v1);
    ll v2_root = find(set,v2);
    if(set[v1_root].rank < set[v2_root].rank){
        set[v1_root].parent=v2_root;
    }
    else if(set[v1_root].rank > set[v2_root].rank){
        set[v2_root].parent=v1_root;
    }
    else{
        set[v2_root].parent=v1_root;
        set[v1_root].rank++;
    }
}
 
int main(){
    ll n,m,a,b;cin>>n>>m;
    Set *set = new Set[n+1];
    f(i,1,n+1){
        set[i].parent=i;
        set[i].rank=0;
    }
    while(m--){
    	cin>>a>>b;
    	Union(set,a,b);
	}
	map<ll,ll> mp;
	for(ll i=1;i<=n;i++){
		mp[find(set,i)]++;
	}
	int ans=mp.size()-1;
	cout<<ans<<"\n";
	int cnt=0;
	for(auto i:mp){
		if(cnt==0) cout<<i.first<<" ";
		else if(cnt==ans){
			cout<<i.first;
		}
		else{
			cout<<i.first<<"\n"<<i.first<<" ";
		}
        cnt++;
	}
}
