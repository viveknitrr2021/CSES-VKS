//https://cses.fi/problemset/task/1638/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,mod=pow(10,9)+7;
    cin>>n;
    int a[n][n];
    char c;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        cin>>c;
        if(c=='*')a[i][j]=0;
        else a[i][j]=1;
    }
    //if(a[i][j]=='*'){cout<<0; return 0;}
    for(i=1;i<n;i++)
    {
        if(a[0][i]==0||a[0][i-1]==0)a[0][i]=0;
        if(a[i-1][0]==0||a[i][0]==0)a[i][0]=0;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i][j]==1)a[i][j]=a[i-1][j]+a[i][j-1];
            a[i][j]%=mod;
        }

    }
    cout<<a[i-1][j-1];
}


/*
#include<bits/stdc++.h>
typedef long long ll;
#define vll vector<long long> 
#define f(i,a,b) for(long long i=a;i<b;i++)
#define F first
#define S second
#define pb(i) push_back(i)
#define mp(x,y) make_pair(x,y)
#define all(v)  (v).begin(),(v).end()
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll mod = 1e9+7;

int main(){
	ll n;cin>>n;
	ll dp[n][n]; memset(dp,0,sizeof(dp));
	char grid[n][n];
	
	f(i,0,n){
		f(j,0,n) cin>>grid[i][j];
	}
	
	if(grid[0][0] == '*') dp[0][0] = 0;
	else dp[0][0] = 1;
	
	f(i,1,n){
		if(grid[0][i] == '.') dp[0][i] = dp[0][i-1];
		else dp[0][i] = 0;
	}
	f(i,1,n){
		if(grid[i][0] == '.') dp[i][0] = dp[i-1][0];
		else dp[i][0] = 0;
	}
	 
	f(i,1,n){
		f(j,1,n){
			if(grid[i][j] == '.') dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
			else dp[i][j] = 0;
		}
	}
	
	cout<<dp[n-1][n-1]<<"\n";
}    
*/
