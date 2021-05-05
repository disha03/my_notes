#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,long long int low,long long int high)
{
    while(low<high)
    {
        if(s[low]!=s[high])
        {
            return false;
            
        }
        low++;
        high--;
    }
    return true;
}
int main()
{
    long long int n,m,maxi=0,start=0,j,a,b,low=0,high=0;
    cin>>n>>m;
    string s;
    cin>>s;
    char ch;
    while(m--)
    {
        cin>>j>>a;
        if(j==1)
        {
            cin>>ch;
            s[a-1]=ch;
        } 
        else{
            cin>>b;
            if(palindrome(s,a-1,b-1)){
        cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        }
        

    }
    
}