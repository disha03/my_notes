#include<bits/stdc++.h>
using namespace std;
long long int sol(vector<long long int>&v, long long int weight,int n)
{
    if(weight==0 || n==0)
    {
        return 0;
    }
    if(weight>=v[n-1]){
    return max (v[n-1]+sol(v,weight-v[n-1],n-1),sol(v,weight,n-1));
    }
    return sol(v,weight,n-1);
}
int main()
{
    long long int n,sum=0,h,j,c=0;
    cin>>n;
    vector<long long int>v(n);
  
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    c=sol(v,sum/2,n);
    //cout<<c<<" ";
    cout<<sum-c-c<<"\n";
    
}