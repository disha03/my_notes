#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,c=0,t,sa=0,an=0;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>n>>s;
       c=0;
       sa=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               c++;
           }
           m=((c)*100)/(i+1);
           if(m>=50)
           {
               cout<<"YES"<<"\n";
               sa++;
               break;
           }
       }
       if(sa==0)
       {
           cout<<"NO"<<"\n";
       }
    }
  
}