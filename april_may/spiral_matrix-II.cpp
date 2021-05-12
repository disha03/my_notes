vector<vector<int> > Solution::generateMatrix(int A) {
    int i=0,j=A-1,l=0,r=A-1,k=1;
    vector<vector<int> > v(A,vector<int>(A));

    while(i<=j && l<=r )
    {
        
        for(int q=l;q<=r;q++)
        {
            v[i][q]=k;
            k++;
            //cout<<i<<" "<<q<<"\n";
        }
        i++;
        for(int q=i;q<=j;q++)
        {
            v[q][r]=k;
            k++;
            //cout<<q<<" "<<r<<"\n";
        }
        r--;
        if(r>=l){
        for(int q=r;q>=l;q--)
        {
            v[j][q]=k;
            k++;
            //cout<<q<<" "<<j<<"\n";
        }
        j--;
        }
        if(j>=i){
        for(int q=j;q>=i;q--)
        {
            v[q][l]=k;
            k++;
            //cout<<q<<" "<<l<<"\n";
        }
        l++;
        }
    }
    return v;
}
