//https://cses.fi/problemset/task/1193/

#include<bits/stdc++.h>
typedef long long ll;
#define vll vector<long long> 
#define pll pair<ll,ll>
#define f(i,a,b) for(long long i=a;i<b;i++)
#define F first
#define S second
#define pb(i) push_back(i)
#define mp(x,y) make_pair(x,y)
#define all(v)  (v).begin(),(v).end()
#define sz 1001
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
ll n,m,a,b,fl=0;
ll dx[4] = {-1,0,1,0};
ll dy[4] = {0,-1,0,1};
string s = "ULDR",t,ans = "";
bool vis[sz][sz];
pair<ll,ll> aux[sz][sz];
char mat[sz][sz],ch[sz][sz];
 
bool isval(ll x,ll y) {return (x>=1 and y>=1 and x<=n and y<=m);}
 
int main(){
	FIO;cin>>n>>m;
	f(i,1,n+1){
		cin>>t;
		f(j,1,m+1){
			mat[i][j] = t[j-1];
			vis[i][j] = false;
			if(mat[i][j]=='A'){
				a = i;b = j;
			}
		}
	}	
	queue<pair<ll,ll> > q;
	q.push({a,b});vis[a][b] = true;
	while(!q.empty()){
		pll p = q.front();
		q.pop();
		if(mat[p.F][p.S]=='B'){
			a = p.F;b = p.S;
			fl=1;break;
		}
		f(i,0,4){
			ll x = p.F+dx[i];
			ll y = p.S+dy[i];
			if(isval(x,y) == false) continue;
			if(vis[x][y] or mat[x][y]=='#') continue;
			vis[x][y] = true;
			ch[x][y] = s[i];
			aux[x][y] = {p.F,p.S};
			q.push({x,y});
		}
	}
	if(fl==0){
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	while(mat[a][b] != 'A'){
		ans += ch[a][b];
		pll pp = aux[a][b];
		a = pp.F;b = pp.S;
	}
	reverse(all(ans));
	cout<<ans.size()<<"\n"<<ans<<"\n";
}
