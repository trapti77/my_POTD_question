class Solution {
public:
int N,M;
int dp[501][501];
    int solve(vector<int> &nums1,vector<int> &nums2,int index1,int index2)
    {
        if(index1==N || index2==M)
        {
            return 0;
        }

        if(dp[index1][index2]!=-1)
        return dp[index1][index2];

        int both,f,s;

        both = nums1[index1]*nums2[index2] + solve(nums1,nums2,index1+1,index2+1);
        f = solve(nums1,nums2,index1+1,index2);
        s = solve(nums1,nums2,index1,index2+1);

        return dp[index1][index2] = max(both,max(f,s));
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        N = nums1.size();
        M = nums2.size();

        int max1=INT_MIN, min1=INT_MAX;
        int max2=INT_MIN, min2=INT_MAX;

        for(int i=0;i<N;i++)
        {
            max1 = max(max1,nums1[i]);
            min1 = min(min1,nums1[i]);
        }
        for(int i=0;i<M;i++)
        {
            max2 = max(max2,nums2[i]);
            min2 = min(min2,nums2[i]);
        }

        if((max1<0 && min2>0) || (max2<0 && min1>0))
        {
            return max(max1*min2,min1*max2);
        }
        memset(dp,-1,sizeof(dp));
        int ans = solve(nums1,nums2,0,0);
        return ans;
    }
};
