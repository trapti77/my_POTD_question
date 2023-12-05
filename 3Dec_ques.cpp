class Solution {
public:
    int maxProduct(vector<int>& nums) {
      /*
      test case pass take more time
      int n=nums.size();
        int mprod=INT_MIN;
        for(int i=0;i<n;i++)
        {
          int pro=1;
          for(int j=i;j<n;j++)
          {
          pro*=nums[j];
          if(pro>mprod)
          {
           mprod=pro;
          }
            }
            if(pro<=0){
            pro=1;
          }
        }
        return mprod;*/
        int n=nums.size();
        int mprod=INT_MIN;
        int pro=1;
        for(int i=0;i<n;i++)
        {
          pro*=nums[i];
          if(pro>mprod)
          {
           mprod=pro;
          }
            if(nums[i]==0){
            pro=1;
          }
        }
         pro=1;
         for(int i=n-1;i>=0;i--)
         {
           pro*=nums[i];
           mprod=max(pro,mprod);
           if(nums[i]==0)
           {
             pro=1;
           }
         }
        return mprod;

    }
};
