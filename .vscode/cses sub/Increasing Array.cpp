#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,sum=0;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        {
            sum+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
        
    }
    
    cout<<sum<<"\n";   
}