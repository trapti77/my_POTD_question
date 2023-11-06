class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int n=prices.size();
       int minp=prices[0];
       int cost=0;
       int maxp=0;
       for(int i=0;i<n;i++)
       {
           minp=min(minp,prices[i]);
           cost=prices[i]-minp;
           maxp=max(maxp,cost);
       }
       return maxp;
    }
};
