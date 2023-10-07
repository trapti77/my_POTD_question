class Solution {
public:
    int integerBreak(int n) {
       vector<int>dp(100);

    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    for(int i=4;i<=n;i++)
    {
        int m=i;
        for(int j=1;j<=m;j++)
        {
            int a=j;
            int b=m-a;
        dp[i]=max({dp[i],a*b,dp[b]*a,dp[a]*b,dp[a]*dp[b]});
        }
    }
    return dp[n];
    }
};
