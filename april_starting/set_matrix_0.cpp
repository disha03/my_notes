void Solution::setZeroes(vector<vector<int> >&v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=v.size(),m=v[0].size(),c=0,d=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(v[i][0]==0)
        {
            c++;
            break;
        }
    }
    for(int j=0;j<m;j++)
    {
        if(v[0][j]==0)
        {
            d++;
            break;
        }
    }
    if(v[0][0]==0)
    {
        l++;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(v[i][j]==0)
            {
                v[0][j]=0;
                v[i][0]=0;
            }
        }
    }
    for(int j=1;j<m;j++)
    {
        if(v[0][j]==0)
        {
            for(int k=0;k<n;k++)
            {
                v[k][j]=0;
            }
        }
    }
    for(int j=1;j<n;j++)
    {
        if(v[j][0]==0)
        {
            for(int k=0;k<m;k++)
            {
                v[j][k]=0;
            }
        }
    }
    if(c>0)
    {
         for(int i=0;i<n;i++)
    {
        v[i][0]=0;
        
    }
    }
    if(d>0)
    {
        for(int j=0;j<m;j++)
    {
        v[0][j]=0;
    }
    }
   
    //cout<<c<<" "<<d<<" "<<l<<"\n";
    
   
    
}
