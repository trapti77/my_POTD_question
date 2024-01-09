/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void postorder(TreeNode*root,vector<int>&v)
    {
        if(root==NULL)
        {
            return ;
        }
         postorder(root->left,v);
         postorder(root->right,v);
          if(root->left==NULL&& root->right==NULL)
        {
            v.push_back(root->val);
         }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int>v1;
        vector<int>v2;
        postorder(root1,v1);
        postorder(root2,v2);
        return v1==v2;
    }
};
