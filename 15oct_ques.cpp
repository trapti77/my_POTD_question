class Solution {
public:
    int numWays(int steps, int arrLen) {
        int M=1e9+7;
     arrLen=min(arrLen,steps);
     vector<vector<int>>dp(arrLen,vector(steps+1,0));
     dp[0][0]=1;
     for(int r=1;r<=steps;r++)
     {
         for(int curr=arrLen-1;curr>=0;curr--)
         {
             int ans=dp[curr][r-1];
             if(curr>0)
             {
                 ans=(ans+dp[curr-1][r-1])%M;
             }
             if(curr<arrLen-1)
             {
                ans=(ans+dp[curr+1][r-1])%M;
             }
             dp[curr][r]=ans;
         }
     }
     return dp[0][steps];
    }
};
