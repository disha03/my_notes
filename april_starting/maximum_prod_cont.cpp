
int Solution::maxProduct(const vector<int> &A) {
   int i,n=A.size(),high=A[0],low=A[0],ans=A[0];
    if(n==1)
    return A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]<0)
        swap(high,low);
        high=max(A[i],A[i]*high);
        low=min(A[i],A[i]*low);
        ans=max(ans,high);
    }
    return ans;
}
