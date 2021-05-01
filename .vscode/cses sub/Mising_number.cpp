#include<bits/stdc++.h>
using namespace std;
int main()
{
    static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
    long long int n,xx,t,q,mod=1000000007,sum=0,a;
 
        cin>>n;
        vector<long long int>v,neww;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
       
      
        cin>>q;
        for(long long int i=0;i<q;i++)
        {
            neww=v;
            sum=0;
            cin>>xx;
            if(xx<0)
            {
                
                rotate(neww.begin(), neww.begin()+abs(xx), neww.end());
            }
            else{
                rotate(neww.begin(), neww.begin()+neww.size()-xx, neww.end());
            }
            a=2*(v.size());
            vector<long long int>arr3(a);
            merge(v.begin(), v.end(), neww.begin(), neww.end(), arr3.begin());
            for(long long int j=0;j<arr3.size();j++)
            {
                sum+=arr3[j];
                //cout<<arr3[j]<<" ";
                sum=sum%mod;
            }
            cout<<sum<<"\n";
            v.clear();
            v=arr3;
        }
    
    
}