#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
   for(int i=5;i<=n;i*=5)
   {
       c+=n/i;
    
       if(n/i<1)
       {
           break;
       }
       
   }
    cout<<c<<"\n";
}