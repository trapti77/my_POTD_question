class Solution {
public:
//RECURSION APPROACH
 int mincost(vector<int>&v,int x,vector<int>&dp)
 {
     if(x<0)return 0;
 if(x==1||x==0) return v[x];
 if(dp[x]!=-1)return dp[x];
   int f=mincost(v,x-1,dp);
   int s=mincost(v,x-2,dp);
 dp[x]=min(f,s)+v[x];
 return dp[x];
 }
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       /*int left=mincost(cost,n-1);
       int right=mincost(cost,n-2);
       int ans=min(left,right);
       return ans;*/
       //RECURSION+MEMOIZATION
         vector<int>dp(n+1,-1);
         return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));

    }

};
