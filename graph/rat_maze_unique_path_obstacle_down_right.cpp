class Solution {
public:
    
int sol(int i,int j,int A,int B,vector<vector<int>>&obstacleGrid,int dp[101][101])
{
    
    if(i>=A || j>=B || obstacleGrid[i][j]==1)
    {
        return dp[A][B]=0;
    }
    if(i==A-1 && j==B-1)
    {
        return dp[A][B]=1;
    }
   
    if(dp[i][j]>0)
    {
        return dp[i][j];
    }
    return dp[i][j]=sol(i+1,j,A,B,obstacleGrid,dp)+sol(i,j+1,A,B,obstacleGrid,dp);
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int dp[101][101];
        memset(dp,0,sizeof(dp));
        int A=obstacleGrid.size(),B=obstacleGrid[0].size();
        return sol(0,0,A,B,obstacleGrid,dp);
   
    }
};