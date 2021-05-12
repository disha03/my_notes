class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(k==0 || n==0)
        {
            return 0;
        }
        vector<int>dp(2*k+2);   //here we maintain all the states of k transaction like buy or sell (skip donot need to show)
        for(int i=0;i<2*k;i++)
        {
            if(i%2==0)
            {
                dp[i]=INT_MIN;          //on buying your profit is some -ive
            }
            else{
                dp[i]=0;                //on selling your profit can be  0 min
            }
        }
        for(int i=0;i<n;i++)                //here we are maintaining all possible state/operation of i th day
        {
            for(int j=0;j<2*k;j++)              //here we are taking all possible combo of operation of ith day
            {
                if(j==0)
                {
                    dp[j]=max(dp[j],-prices[i]);
                }
                else if(j%2==0)
                {
                    dp[j]=max(dp[j],dp[j-1]-prices[i]);          //we have two option here either buy or skip on i th day, if we skip prev value maintained else we buy it then prev profit-current price is whart we have in our hands
                }
                else{
                    dp[j]=max(dp[j],dp[j-1]+prices[i]);
                }
            }
        }
        return dp[2*k-1];
    }
};