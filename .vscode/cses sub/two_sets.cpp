#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,h,j,c=0;
    cin>>n;
    vector<int>v(n+1,0);
    sum=n*(n+1)/2;
    if(sum%2!=0)
    {
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        h=sum/2;
        j=n;
        
        while(h)
        {
            c++;
            if(h>j){
            h=h-j;
            v[j-1]++;
            //cout<<j<<" ";
            j--;
            }
            else{
                //cout<<h<<" ";
                v[h-1]++;
                break;
            }
            
        }
        cout<<c<<"\n";
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
        cout<<n-c<<"\n";
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                cout<<i+1<<" ";
            }
        }
    }
}