#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(max(a,b)>2*min(a,b))
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if((a+b)%3==0)
        {
            
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
   
}