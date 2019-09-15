//https://cses.fi/problemset/task/1668/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
class Graph{
 
    ll V;
    list<ll> *l;
    ll *colors;
 
public:
    Graph(ll v){
        V=v;
        l = new list<ll>[V+1];
        colors = new ll[V+1];
    }
    void addEdge(ll u,ll v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool isBipartite(){
        for(ll i=1;i<=V;i++){
            colors[i]=0;
        }
        for(ll i=1;i<=V;i++){
            if(colors[i]==0){
                queue<ll> q;
                q.push(i);
                colors[i]=1;
                while(!q.empty()){
                    ll u = q.front();
                    q.pop();
                    ll tmp = colors[u]%2 + 1;
                    for(auto v:l[u]){
                        if(colors[v]==0){
                            q.push(v);
                            colors[v] = tmp;
                        }
                        else if( tmp != colors[v]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
    void print(){
        for(ll i=1;i<=V;i++){
            cout<<colors[i]<<" ";
        }
    }
 
};
 
int main(){
        ll n,m,a,b;cin>>n>>m;
        Graph g(n);
        while(m--){
            cin>>a>>b;
            g.addEdge(a,b);
        }
        if(g.isBipartite()==false){
            cout<<"IMPOSSIBLE\n";
        }
        else  {
            g.print();
        }
        return 0;
}
 
/*
--> It's simple Bipartite checking problem.
--> But the thing that can easily be overlooked is that their may be disconnected components.
--> For taking care of them we run a for loop instead just a while loop until queue is empty.
--> In this way disconnected components are also considered and those node which are already colored
    are not processed again.
--> Note : color array is working here as visited array.
--> tmp variable is to store the color for children , doing modulo 2 and adding one changes 1 to 2 and vice versa.
--> if changed color for child is not equal to actual color of visited child than clearly graph is not bipartite.
--> Eventually if graph is bipartite we have to print the color array otherwise IMPOSSIBLE.
*/
