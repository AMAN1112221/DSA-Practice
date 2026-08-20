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
    void pathcheck(TreeNode *root,int targetSum,int &count,long long sum)
    {   
        if(root==nullptr)
            return ;
         sum=sum+root->val;

        if(sum==targetSum)
        count++;

       
        pathcheck(root->left,targetSum,count,sum);
        pathcheck(root->right,targetSum,count,sum);

    }
    void pathselect(TreeNode *root,int targetSum,int &count)
    {
        int sum=0;
        if(root==nullptr)
        return ;
        pathcheck(root,targetSum,count,sum);
        pathselect(root->left,targetSum,count);
        pathselect(root->right,targetSum,count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        
        
        pathselect(root,targetSum,count);
        
        return count;
        
    }
};