class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       /* int c=0;
        int n=nums.size();
         vector<int>ans(0);
       int mid=n/3;
       if(n==1)
       {
           return nums;
       }
       if(n==2)
       {
           
       for(int i=0;i<n;i++)
       {
        if(nums[i]==nums[i+1])
        {
            vector<int>v;
            v.push_back(nums[i]);
            return v; 
        }
        else
        {
            return nums;
        }
       }
       }
       vector<int>a;
      if(n>=3)
        {
           for(int i=0;i<n;i++)
           {
               if(nums[i]==nums[i+1])
           sort(nums.begin(),nums.end());
           ans.push_back( nums[mid]);
           return ans;
           }
       
         }
        return a;*/
        unordered_map<int,int>m;
        vector<int>v;
        for( auto i:nums)
        {
            m[i]++;
        }
        int mid=nums.size()/3;
        for(auto i:m)
        {
            if(i.second>mid)
            {
            v.push_back(i.first);
            }
        }
        return v;
    }
};
