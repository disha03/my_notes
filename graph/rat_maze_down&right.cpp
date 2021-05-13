//no obstacle
int dp[1000][1000];
int sol(int i,int j,int A,int B)
{
    if(i==A-1 || j==B-1)
    {
        return 1;
    }
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    return dp[i][j]=sol(i+1,j,A,B)+sol(i,j+1,A,B);
}
int Solution::uniquePaths(int A, int B) {
    
    memset(dp,0,sizeof(dp));
    return sol(0,0,A,B);
}
///////////////////////////////////////////////////////////////
class Solution {
public:
    int dp[103][103];
    int paths(int sa,int se,int e1,int e2)
    {
        int c,d;
        if(se>e2 || sa>e1)
        {
            return 0;
        }
        if(sa==e1 && se==e2)
        {
            return 1;
        }
        if(dp[sa][se]!=-1)
        {
            return dp[sa][se];
        }
        
            c=paths(sa+1,se,e1,e2);
        
            d=paths(sa,se+1,e1,e2);
        
        return dp[sa][se]=c+d;
        
    }
    int uniquePaths(int m, int n) {
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j]=-1;
            }
        }
        return paths(1,1,m,n);
       
    }
};
///////////////////////////////////////////////////////////////
class Solution {
public:
    int dp[103][103];
    int paths(int sa,int se,int e1,int e2)
    {
        int c,d;
        if(se>e2 || sa>e1)
        {
            return 0;
        }
        if(sa==e1 && se==e2)
        {
            return 1;
        }
        if(dp[sa][se]!=-1)
        {
            return dp[sa][se];
        }
        if(dp[sa+1][se]!=-1)
        {
            c=dp[sa+1][se];
        }
        else{
            c=paths(sa+1,se,e1,e2);
        }
        if(dp[sa][se+1]!=-1)
        {
            d=dp[sa][se+1];
        }
        else{
            d=paths(sa,se+1,e1,e2);
        }
        return dp[sa][se]=c+d;
        
    }
    int uniquePaths(int m, int n) {
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j]=-1;
            }
        }
        return paths(1,1,m,n);
      
    }
};
