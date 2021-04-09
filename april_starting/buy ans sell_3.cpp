int Solution::maxProfit(const vector<int> &A) {
    int n=A.size(),ans=0,k;
     vector<int>l(n+2),r(n+2),maxi(n+2),mini(n+2);
    if(A.size()==0)
    {
        return 0;
    }
   
    mini[0]=A[0];
    maxi[n-1]=A[n-1];
    l[0]=0;
    r[n-1]=0;
    k=A[0];
    for(int i=1;i<n;i++)
    {
      k=min(k,A[i]);
      mini[i]=k;
      l[i]=max(l[i-1],A[i]-mini[i]);
    }
    k=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        k=max(k,A[i]);
        maxi[i]=k;
        r[i]=max(r[i+1],maxi[i]-A[i]);
    }
    for(int i=0;i<n;i++)
    {
        ans=max(ans,l[i]+r[i]);
    }
    return ans;    
}
