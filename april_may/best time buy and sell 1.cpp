int Solution::maxProfit(const vector<int> &A) {
    vector<int>v;
    if(A.size()==0)
    {
        return 0;
    }
    int maxi=0,sum=A[0];
    for(int i=1;i<A.size();i++)
    {
        
        if(sum<A[i])
        {
             maxi=max(maxi,A[i]-sum);
        }
        else{
            sum=A[i];
        }
       
    }
    return maxi;
}
