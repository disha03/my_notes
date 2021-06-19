//https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1#
//https://www.geeksforgeeks.org/coin-change-dp-7/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int nums[], int n){
        // Your code here
        if(nums[0]==0)
        {
            return -1;
        }
        if(n==1)
        {
            return 0;
        }
        int f=nums[0],curr=nums[0],j=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return j;
            }
            f=max(f,i+nums[i]);             //how far we can go from that point
            if(i==curr)
            {
                j++;
                if(f==curr)                //means you are not able to cross that point
                {
                    return -1;
                }
                curr=f;
                
            }
            
        }
         
        return j;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends