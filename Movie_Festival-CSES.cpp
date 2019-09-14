//https://cses.fi/problemset/task/1629/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,a,b,cnt=0,temp=0;cin>>n;
  vector<tuple<int,int> > v;
  while(n--){
    cin>>a>>b;
    v.push_back(make_tuple(b,a));
  }
  sort(v.begin(),v.end());
  for(auto i:v){
    tie(b,a) = i;
    if(a>=temp){
      temp=b;
      cnt++;
    }
  }
  cout<<cnt<<"\n";
}
