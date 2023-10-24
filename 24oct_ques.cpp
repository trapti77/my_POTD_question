class Solution {
public:
    void trav(TreeNode*root,int level,vector<int>&ans)
    {
        if(!root)return ;
        if(level<ans.size())
        {
            if(root->val>ans[level])
            ans[level]=root->val;
        }
        else
        {
            ans.push_back(root->val);
        }
        trav(root->left,level+1,ans);
        trav(root->right,level+1,ans);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
    trav(root,0,ans);
       return ans;
    }
};
