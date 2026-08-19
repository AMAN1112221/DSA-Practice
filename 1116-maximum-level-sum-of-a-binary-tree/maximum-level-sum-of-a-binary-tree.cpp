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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        int cnt=1;
        int maxi=INT_MIN;
        int ans;
        while(!q.empty())
        {
            long long sum=0;
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                sum=sum+(temp->val);

                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);
            }
            if(sum>maxi)
            {
                ans=cnt;
                maxi=sum;
            }
            cnt++;

        }
    return ans;
        
    }
};