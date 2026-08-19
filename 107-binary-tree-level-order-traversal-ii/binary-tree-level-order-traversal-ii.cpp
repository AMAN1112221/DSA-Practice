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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(root==nullptr)
        return ans;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>levelans;
            for(int i=1;i<=n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                levelans.push_back(temp->val);

                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(levelans);
        }
        int start=0;
        int end=ans.size()-1;
        while(start<end)
        {
            swap(ans[start],ans[end]);
            start++;
            end--;
        }
        return ans;


        
        
    }
};