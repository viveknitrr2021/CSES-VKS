//https://cses.fi/problemset/task/1087/
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    set<char> s;
    cin>>s1;
    for(auto i:s1){
        s.insert(i);
        if(s.size()==4){
            s2.push_back(i);
            s.clear();
        }
    }
    if(s.count('A')==0) s2.push_back('A');
    else if(s.count('C')==0) s2.push_back('C');
    else if(s.count('G')==0) s2.push_back('G');
    else  s2.push_back('T');
    cout<<s2<<"\n";
}
