class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(k==0 || n==0)
        {
            return 0;
        }
        vector<int>dp(k+2);   //here we maintain all the states of k transaction like buy or sell (skip donot need to show)
        for(int i=0;i<k;i++)
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
            for(int j=0;j<k;j++)              //here we are taking all possible combo of operation of ith day
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
//////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size(),ans=0;
        if(k==0 || n==0)
        {
            return 0;
        }
          vector<int> b(k + 1, INT_MIN), s(k + 1, 0);
        
        s[0]=0;
        b[0]=0;
        s[1]=0;
        for(int i=0;i<n;i++)
        {
           
            for(int j=1;j<=k;j++)
            {
               b[j]=max(b[j],s[j-1]-prices[i]);
               s[j]=max(s[j],b[j]+prices[i]);
                ans=max(ans,s[j]);
            }
        }
        return ans;
    }
};