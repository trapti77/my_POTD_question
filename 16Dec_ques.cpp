class Solution {
public:
void solve(int idx,int tar,vector<int>& candidates, vector<vector<int>>&ans,vector<int>&ds){
    int n=candidates.size();
    if(idx==n)
    {
        if(tar==0){
            ans.push_back(ds);
        }
        return ;
    }
    if(candidates[idx]<=tar)
    {
        ds.push_back(candidates[idx]);
        solve(idx,tar-candidates[idx],candidates,ans,ds);
        ds.pop_back();
    }
    solve(idx+1,tar,candidates,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int sum=0;
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,target,candidates,ans,ds);
        return ans;
    }
};
