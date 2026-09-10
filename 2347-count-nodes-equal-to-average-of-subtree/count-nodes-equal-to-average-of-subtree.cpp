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
    int summation(TreeNode *root,int &temp_count)
    {
        if(root==nullptr)
        return 0;

        temp_count++;
        return (root->val+summation(root->left,temp_count)+summation(root->right,temp_count));
    }
    void Preorder(TreeNode*root,int &count)
    {
        if(root==nullptr)
        return;
        
        int temp_count=0;

        int sum=summation(root,temp_count);
        if(sum/temp_count==root->val)
        count++;


        Preorder(root->left,count);
        Preorder(root->right,count);
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        Preorder(root,count);


        return count;

        
    }
};