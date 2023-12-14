class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
v.push_back((nums[i]-1)*(nums[j]-1));
            }
        }
        int m=0;
        for(int i=0;i<v.size();i++)
        {
           
            if(v[i]>m)
            {
                m=v[i];
                
            }
           
        }
       return m;
    }

};
