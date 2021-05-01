#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,res;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        
        if(a%2!=0 && a>=b)
        {
            long long int k=((a-1)*(a-1))+1;
            while(b>1)
            {
                k++;
                b--;
            }
            res=k;
        }
        else if(b%2!=0 && b>=a)
        {
            long long int k=b*b;
            while(a>1)
            {
                k--;
                a--;
            }
             res=k;
        }
        else if(a%2==0 && a>=b)
        {
            long long int k=a*a;
            while(b>1)
            {
                k--;
                b--;
            }
             res=k;
        }
        else if(b%2==0 && b>=a)
        {
            long long int k=((b-1)*(b-1))+1;
            while(a>1)
            {
                k++;
                a--;
            }
             res=k;
        }
        cout<<res<<"\n";
    }
}