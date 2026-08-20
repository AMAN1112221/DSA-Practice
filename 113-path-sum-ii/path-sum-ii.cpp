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
    void pathcheck(TreeNode* root,int targetSum,int sum,vector<int>path,vector<vector<int>>&ans)
    {
        if(root==nullptr)
        return ;
        sum=sum+root->val;
        path.push_back(root->val);
        if(sum==targetSum && root->left==nullptr && root->right==nullptr)
        {
            ans.push_back(path);
            return ;
        }
       
        pathcheck(root->left,targetSum,sum,path,ans);
        pathcheck(root->right,targetSum,sum,path,ans);

    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        int sum=0;
        pathcheck(root,targetSum,sum,path,ans);
        return ans;
        
    }
};