class Solution {
public:
/*int first(vector<int>& nums, int target)
{
         int ans=-1;
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e)
        {
          if(nums[mid]==target)
          {
              ans=mid;
              e=mid-1;
          }
          if(nums[mid]>target)
          {
              e=mid-1;
          }
          if(nums[mid]<target)
          {
              s=mid+1;
          }
           mid=(s+e)/2;
        }
        return ans;
        
}
int second(vector<int>& nums, int target)
{
        int ans=-1;
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
    
   while(s<=e)
        {
          if(nums[mid]==target)
          {
              ans=mid;
              s=mid+1;
          }
          if(nums[mid]>target)
          {
              e=mid-1;
          }
          if(nums[mid]<target)
          {
              s=mid+1;
          }
           mid=(s+e)/2;
        }
        return ans;
        
}*/
    vector<int> searchRange(vector<int>& nums, int target) {
        
       /* vector<int>v;
        v.push_back(first(nums,target));
        v.push_back(second(nums,target));
        return v;
        */
        int n=nums.size();
    int f=-1;
    int l=-1;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            f=i;
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(nums[j]==target)
        {
            l=j;
            break;
        }
    }
    ans.push_back(f);
    ans.push_back(l);
    return ans;
        
    }
};
