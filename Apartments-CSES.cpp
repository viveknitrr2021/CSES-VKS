//https://cses.fi/problemset/task/1084

#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
	FIO;
	int n,m,k,c=0,i=0,j=0;cin>>n>>m>>k;
	int a[n],b[n];
	for(int k=0;k<n;k++) cin>>a[k];
	for(int k=0;k<m;k++) cin>>b[k];
	sort(a,a+n);sort(b,b+m);
	while(i<n && j<m){
		if(a[i]+k<b[j]) i++;
		else if(a[i]-k>b[j]) j++;
		else {i++;j++;c++;}
	}
	cout<<c<<"\n";
	
