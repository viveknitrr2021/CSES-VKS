#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,V,i,j;
    string s1,s2;
    cin>>s1>>s2;

    long long a[s1.length()+1][s2.length()+1];
    for(i=0;i<=s1.length();i++)
    {
        for(j=0;j<=s2.length();j++)
        {
            if(i==0)a[i][j]=j;
            else if(j==0)a[i][j]=i;
            else{
                if(s1[i-1]==s2[j-1])a[i][j]=a[i-1][j-1];
                else a[i][j]=1+min(a[i][j-1],min(a[i-1][j-1],a[i-1][j]));
            }
        }
    }

    cout<<a[i-1][j-1];

    return 0;
}

