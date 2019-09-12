//https://cses.fi/problemset/task/1641/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
class A{
public:
	int val;
	int idx;
};

bool comp(A a,A b){
	return a.val<b.val;
}

int main(){
	int n;cin>>n;
	int x;cin>>x;
	A *a = new A[n];
	for(int i=0;i<n;i++){
		int p;cin>>p;
		a[i].val=p;
		a[i].idx=i+1;
	}
	sort(a,a+n,comp);
	for(int i=0;i<n-2;i++){
		int j=i+1;int k=n-1;
		while(j<k){
			if(a[i].val+a[j].val+a[k].val==x){
				cout<<a[i].idx<<" "<<a[j].idx<<" "<<a[k].idx<<"\n";
				return 0;
			}
			else if(a[i].val+a[j].val+a[k].val<x) j++;
			else k--;
		}
	}
	cout<<"IMPOSSIBLE\n";
}
