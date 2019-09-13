//https://cses.fi/problemset/task/1674/
 
#include<bits/stdc++.h>
#define pb(i) push_back(i)
using namespace std;
 
int cnt[200010];
vector<int> v[200010];
 
void dfs(int src,int par){
    cnt[src]=1;
    for(auto i:v[src]){
        if(i==par) continue;
        dfs(i,src);
        cnt[src]+=cnt[i];
    }
}
 
int main(){
    int n;cin>>n;
    int p=n-1,q=2,r;
    while(p--){
        cin>>r;
        v[q].pb(r);v[r].pb(q);
        q++;
    }
    dfs(1,0);
    for(int i=1;i<=n;i++) cout<<cnt[i]-1<<" ";
    cout<<"\n";
}
