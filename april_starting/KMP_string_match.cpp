#include <bits/stdc++.h>
using namespace std;
long long int c=0;
void compute(vector<long int>lps,string s1,string s)
{
    long long n=s1.size(),m=s.size();
    long int i=0,j=0;
    while(i<n)
    {
        if(s1[i]==s[j])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            c++;
            j=lps[j-1];
        }
        else if(i<n && s1[i]!=s[j]){
            if(j!=0){
            j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    
}
int main()
{
    long long int n, m, i = 1, j = 0;
    string s1, s;
    cin >> s1 >> s;
   
    n = s1.size(), m = s.size();
     vector<long int>lps(m+1);
    lps[0] = 0;

    while (i < m)
    {

        if (s[j] == s[i])
        {
            j++;
            i++;
            lps[i - 1] = lps[j - 1] + 1;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    compute(lps,s1,s);
    cout<<c<<"\n";
}