#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,pro=1;
    cin>>n;
    while(n>0)
    {
        pro=pro*2;
        n--;
        pro=pro%1000000007;
    }
    cout<<pro<<" ";
}