//https://cses.fi/problemset/task/1091

#include<bits/stdc++.h>
using namespace std;
 
int main() {
	//g++ -o cses1 cses1.cpp&cses1.exe
	int n, m, x;
	cin >> n >> m;
	multiset <int,greater<int> > h;
	while(n--){
		cin>>x;
		h.insert(x);
	}
	while(m--){
		cin>>x;
		auto it=h.lower_bound(x);
		if(it==h.end()) cout<<"-1\n";
		else{
			cout<<*it<<"\n";
			h.erase(it);
		}
	}
}
