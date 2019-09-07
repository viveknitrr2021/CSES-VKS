//https://cses.fi/problemset/task/1192/
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
char mat[1001][1001];
ll vis[1001][1001];
ll n,m,cnt=0;
ll dx[]={0,0,1,-1};
ll dy[]={-1,1,0,0};
 
void dfs(int row,int col){
    vis[row][col] = 1;
    for (int k=0;k<4;k++){
        int x=row+dx[k];
        int y=col+dy[k];
        if( (x>=0&&x<n) and (y>=0&&y<m) and (mat[x][y]=='.' && !vis[x][y]) )    
            dfs(x,y);  
    }
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(vis[i][j]==0 and mat[i][j]=='.'){
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt<<"\n";
}
