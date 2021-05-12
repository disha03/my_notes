#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    long long int ans=0,mod=1000000007,c=0;
    while(t--)
    {
        long long int n,m;
        ans=0,c=0;
        cin>>n;
        vector<long long int>v(n),pre(n,0);
        
        for(long long int i=0;i<n;i++)
        {
        cin>>v[i];
      
        if(i != 0){
                pre[i] += pre[i-1];
            }
            pre[i] += v[i];
            pre[i] %= mod;
        }
        sort(v.begin(),v.end());
        cin>>m;
         vector<long long int>qq(m);
        for(int i=0;i<m;i++)
        {
        cin>>qq[i];
        }
         for(int i=0;i<m;i++)
        {
        
       auto it = upper_bound(v.begin(), v.end(), qq[i]);
            if(it == v.end()){
                ans += pre[n-1];
            }
            else{
                int idx = it-v.begin();
                if(idx!=0){
                    ans += pre[idx-1];
                }
                ans += qq[i] *1ll*(n-idx);
            }
            ans %= mod;
        }
        cout<<ans<<"\n";
        v.clear();
        pre.clear();
        qq.clear();
        
        
    }
    return 0;
}
