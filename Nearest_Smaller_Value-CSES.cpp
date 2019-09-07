//https://cses.fi/problemset/task/1645/
 
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<pair<int,int> > b;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        a.push_back(num);
    }
    for(int i=0;i<n;i++){
        pair<int,int> p;
        while(b.size()>0){
            p=b.back();
            if(p.second<a[i])   break;
            b.pop_back();
        }
        if(b.size()==0) p.first=0;
        cout<<p.first<<" ";
        b.push_back(make_pair(i+1,a[i]));
    }
    cout<<"\n";
}
