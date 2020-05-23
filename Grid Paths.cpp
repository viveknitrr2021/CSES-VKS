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


