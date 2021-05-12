//allow as many as transition we want
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


//**********************if we also ask to find the index of the element
vector<vector<int> > stockBuySell(vector<int> a, int n){
        // code here
        int sum=0;
        vector<vector<int> > s;
        for(int i=1;i<n;i++)
        {
          if(a[i-1]<a[i])
          {
              vector<int>v;
              v.push_back(i-1);
              i++;
              while(i<n && a[i-1]<=a[i])
              {
                  i++;
              }
              v.push_back(i-1);
              s.push_back(v);
          }
          
          
        }
        return s;
    }
