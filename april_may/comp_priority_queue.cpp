// { Driver Code Starts
//Initial Template for C++
//https://practice.geeksforgeeks.org/problems/top-k-numbers3425/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
   vector<int>v;
   struct comp{
        bool operator() (pair<int,int> a,pair<int,int> b){
           if(a.first==b.first)
       {
           return a.second>b.second;
       }
      
           return a.first<b.first;     //because stack main top main high chahiye b top pe high freq wala hai
       
        }
    };
   
  void showpq( priority_queue<pair<int,int>,vector<pair<int,int>>,comp>&q,unordered_map<int,int>&m,int k)
{
     priority_queue<pair<int,int>,vector<pair<int,int>>,comp>g;
     int h=0;
    while (!q.empty()) {
        if(m[q.top().second]==q.top().first){
       v.push_back(q.top().second);
         h++;
          g.push({m[q.top().second],q.top().second});
        }
        
        q.pop();
        if(h==k)
        {
            break;
        }
    }
    q=g;
  
}
    vector<int> kTop(int arr[], int n, int k) 
    { 
        //code here.
        unordered_map<int,int>m;
         priority_queue<pair<int,int>,vector<pair<int,int>>,comp>q;
       
         for(int i=0;i<n;i++) 
        {
            m[arr[i]]++;
           
             q.push({m[arr[i]],arr[i]});
         
            showpq(q,m,k);
            
        }
        return v;
          
    }
};


// { Driver Code Starts.

int main() {
	long long t;
	
	cin >> t;
	
	while(t--){
	    long long n;
	    long long k;
	    cin >> n;
	    cin >> k;
	    int a[n];
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	    }
	        Solution ob;
	        vector<int> ans;
	        ans=ob.kTop(a,n,k);
	        for(int i=0;i<ans.size();i++)
	        {
	        cout<<ans[i];
	        cout<<" ";
	        }
	        cout<<'\n';
	    }
	return 0;
}
  // } Driver Code Ends