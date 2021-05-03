#include<bits/stdc++.h>
using namespace std;
void permute(set<string>&v,string a, int l,int r)
{
    if(l==r)
    {
        v.insert(a);
        //cout<<a<<"\n";
            }
    else{
         for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(v,a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
int main()
{
    long long int n,pro=0;
    set<string>v;
    string s;
    
    cin>>s;
    n=s.size();
    permute(v,s,0,n-1);
    pro=v.size();
    cout<<v.size()<<"\n";
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr<<"\n";
    }

}