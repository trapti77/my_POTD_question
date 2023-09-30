class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return true;
        bool in=true;
        bool dec=true;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                dec=false;
            }
            else if(nums[i]<nums[i-1])
            {
            in=false;
            }
        }
     
     return in||dec;
    }
};
