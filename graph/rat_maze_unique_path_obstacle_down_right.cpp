//with obstacle
class Solution {
public:
    
int sol(int A,int B,vector<vector<int>>obstacleGrid,int dp[1000][1000])
{
    if(A<0 || B<0)
    {
        return 0;
    }
    if(obstacleGrid[A][B]==1)
    {
        return 0;
    }
   
    if(dp[A][B]!=0)
    {
        return dp[A][B];
    }
    return dp[A][B]=sol(A-1,B,obstacleGrid,dp)+sol(A,B-1,obstacleGrid,dp);
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int dp[1000][1000];
        memset(dp,0,sizeof(dp));
        int A=obstacleGrid.size(),B=obstacleGrid[0].size();
        sol(A,B,obstacleGrid,dp);
    return dp[A][B];
    }
};