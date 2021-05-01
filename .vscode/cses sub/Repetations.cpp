#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int maxi=0,j=0,c=0;
    for(int i=0;i<s.size();i=j)
    {
        j=i+1;
        c=1;
        while(j<s.size() && s[j-1]==s[j])
        {
            j++;
            c++;
            maxi=max(maxi,c);
        }
        maxi=max(maxi,c);
    }
    cout<<maxi<<"\n";
}