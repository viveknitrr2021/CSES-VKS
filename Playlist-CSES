C++ Code

//https://cses.fi/problemset/task/1141/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	map<ll,ll> mp;
	mp[a[0]]++;
	ll i=0,j=1,mx=0,c_l=1;
	while(i<n-1 and j<n){
		if(mp[a[j]]==0){
			c_l++;
			mp[a[j]]++;
			j++;
		}
		else{
			mx=max(mx,c_l);
			mp[a[i]]--;
			c_l--;
			i++;
		}
	}
	cout<<max(c_l,mx)<<"\n";
}





...................................................................................


Java Code

import java.util.HashSet;
import java.util.Scanner;
 
 
/*
 @author VIVEK KUMAR SINGH
https://cses.fi/problemset/task/1141/
 */
 
public class playlist {
   
    public static void main(String[] args) {
        int n;
        Scanner sc  = new Scanner(System.in);
        n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int ans=find(a);
        System.out.println(ans);
    }
   
    static int find(int[] a){
        int i=0,j=1,mx=0,c_l=1;
        HashSet<Integer> set = new HashSet<>();
        set.add(a[0]);
 
        while(i < a.length - 1 && j < a.length) {
            if (!set.contains(a[j])) {
                c_l++;
                set.add(a[j++]);
            }
            else {
                mx = Math.max(mx,c_l);
                set.remove(a[i++]);
                c_l--;
            }
        }
 
        return Math.max(c_l,mx);
    }
}
