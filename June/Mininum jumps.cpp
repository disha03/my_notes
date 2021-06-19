https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

//greedy
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//DP approach (n2)

int minJumps(int arr[], int n){
    vector<int>v(n+1,INT_MAX);
    if(arr[0]==0 || n==0)return -1;
    int k=0,h,l,j=0;
    v[0]=0;
    for(int i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i<=j+arr[j] && v[j]!=INT_MAX)
            {
                v[i]=min(v[i],v[j]+1);
            }
        }
       
    }
    if(v[n-1]==INT_MAX || v[n-1]==0)return -1;
    return v[n-1];
    
}
