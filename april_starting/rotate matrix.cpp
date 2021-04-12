void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int m=A[0].size();
    
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<A[0].size();j++)
        {
            swap(A[i][j],A[j][i]);                      //transpose_matrix
        }
        
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m/2;j++)
        {
            swap(A[i][j],A[i][n-j-1]);                  //reverese the rows of transform matrix
            //cout<<A[i][j]<<" ";
        }
        //cout<<"\n";
        
    }
}
