#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,c=0;
    string s1,s2;
    cin>>s1>>s2;
    n=s1.size(),m=s2.size();
    for(int i=0;i<=n-m;i++)
    {
        if(s1.substr(i,m)==s2)
        {
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;

}