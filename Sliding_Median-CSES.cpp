//Policy Based Data Structure
 
//https://cses.fi/problemset/task/1076/
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define Find find_by_order
#define Order order_of_key
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
int main(){
    FIO;
    int n,k;cin>>n>>k;
    indexed_set s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) s.insert(a[i]);
    cout<<*s.Find((k+1)/2-1)<<" ";
    for(int i=0;i<n-k;i++){
        s.erase(s.Find(s.Order(a[i])));
        s.insert(a[i+k]);
        cout<<*s.Find((k+1)/2-1)<<" ";
    }
    cout<<"\n";
}
 
 
/*
A policy-based data structure that is like set.
It can add/remove elements, can find the number of elements less than x, kth smallest element etc in O(logn) time.
It can also be indexed like an array. The specialty of this set is that we have access to the indices that the elements
would have in a sorted array. If the element does not appear in the set, we get the position that the element would
have in the set.
//https://www.geeksforgeeks.org/policy-based-data-structures-g/
*/
