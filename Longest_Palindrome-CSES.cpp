//https://cses.fi/problemset/task/1111/
//https://cses.fi/problemset/task/1111/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)

int main() {
	string s;cin>>s;
	int n = s.size();
	vector<int> d1(n);
	for (int i = 0, l = 0, r = -1; i < n; i++) {
	    int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
	    while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
	        k++;
	    }
	    d1[i] = k--;
	    if (i + k > r) {
	        l = i - k;
	        r = i + k;
	    }
	}
	vector<int> d2(n);
	for (int i = 0, l = 0, r = -1; i < n; i++) {
	    int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
	    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
	        k++;
	    }
	    d2[i] = k--;
	    if (i + k > r) {
	        l = i - k - 1;
	        r = i + k ;
	    }
	}
	string st="",s1="",s2="";
	int mx = *max_element(d1.begin(),d1.end()),id;
	if(mx != 1){
		f(i,0,n){
			if(d1[i]==mx){
				id = i;
				break;
			}
		}
		st = s.substr(id,mx);
		s1 = string(st.rbegin(),st.rend());
		st.erase(st.begin());
		s1 += st;
	}
	mx = *max_element(d2.begin(),d2.end());
	if(mx!=0){
		f(i,0,n){
			if(d2[i]==mx){
				id = i;
				break;
			}
		}
		st = s.substr(id,mx);
		s2 = string(st.rbegin(),st.rend());
		s2 += st;
	}
	if(s1.size()==0 and s2.size()==0){
		cout<<s[0]<<"\n";
	}
	else if(s1.size()>s2.size()){
		cout<<s1<<"\n";
	}
	else{
		cout<<s2<<"\n";
	}
}
