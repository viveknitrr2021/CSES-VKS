//https://cses.fi/problemset/task/1083/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x=0;
	for(int i=1;i<=n;i++) x=x^i;
	n--;
	while(n--){
		int a;cin>>a;x=x^a;
	}
	cout<<x<<"\n";
	return 0;
}
