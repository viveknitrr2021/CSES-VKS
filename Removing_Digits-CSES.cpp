//https://cses.fi/problemset/task/1637/
 
#include<bits/stdc++.h>
using namespace std;
 
int maxdig(int n){
    int p=0;
    while(n){
        p=max(p,n%10);
        n=n/10;
    }
    return p;
}
 
int main(){
    int n;cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        if(i/10==0) v[i]=1;
        else{
            int p=maxdig(i);
            v[i]=1+v[i-p];
        }
    }
    cout<<v[n]<<"\n";
}
