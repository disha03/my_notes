int Solution::maxProfit(const vector<int> &A) {

    if(A.size()==0)
    {
        return 0;
    }
    long long int maxi=0,sum=A[0],res=0,c=0;
    for(int i=1;i<A.size();i++)
    {
        
        if(sum<A[i])
        {
             maxi+=A[i]-sum;
            
        }
         sum=A[i];
       
    }
   
   return maxi;

}
