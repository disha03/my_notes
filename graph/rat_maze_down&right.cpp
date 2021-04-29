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
