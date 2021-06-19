 int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        vector<vector<int>>v(n+2,vector<int>(m+2,0));
        int c=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    v[i][j]=1+v[i-1][j-1];
                }
                else{
                    v[i][j]=0;
                }
                c=max(c,v[i][j]);
            }
        }
        return c;
    }