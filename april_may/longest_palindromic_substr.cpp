#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,maxi=0,start=0,j,low=0,high=0;
    string s;
    cin>>s;
    n=s.size();
    vector<vector<long long int>>v(n+2,vector<long long int>(n+2));
    for(long long int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            v[i][j]=0;
        }
    }

    for(long long int i=0;i<n;i++)          //string of length 1
    {
        v[i][i]=1;
        start=i;
        maxi=1;
    }
    for(long long int i=1;i<n;i++)          //string of length 2
    {
        if(s[i-1]==s[i])
        {
            v[i-1][i]=1;
            start=i-1;
            maxi=2;
        }
    }
    for(long long int k=3;k<=n;k++)         //string of length 3 or greater
    {
        for(long long int i=0;i<n-k+1;i++)
        {
            j=i+k-1;
            if(v[i+1][j-1] && s[i]==s[j])
            {
                v[i][j]=1;
                start=i;
                maxi=k;
            }
           
        }
    }
    low=start;
    high=start+maxi-1;
    for (long long int i = low; i <= high; ++i)
        cout << s[i];
    
}