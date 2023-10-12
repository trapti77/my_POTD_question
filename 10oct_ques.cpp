1class Solution {
public:
    int minOperations(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=n;
        set<int>s(nums.begin(),nums.end());
        vector<int>v;
        for(auto i:s){
            v.push_back(i);
        }
        int j=0;
        for(int i=0;i<v.size();i++){
            while(j<v.size() && v[j]<v[i]+n){
                j++;
            }
            int count=j-i;
            res=min(res,n-count);
             return res;
        }*/
         sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> u(nums.begin(), unique(nums.begin(), nums.end()));
    
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        if (abs(nums[0] - nums[1]) != 1) {
            return 1;
        } else {
            return 0;
        }
    }

    int i = 0;
    int j = 0;
    int ans=1 ;
    int k = u.size();
    while (j < k && i < k) {
        int range = u[i] + n - 1;
            while(j < k&&u[j] <= range){
              j++;
            }  
            ans = max(ans, j - i);
            i++;
        }
         return n - ans;
       
    }
};
