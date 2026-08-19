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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        TreeNode *temp;
        if(root ==NULL)
        return ans;
        int cnt=1;
        while(! q.empty())
        {    int n=q.size();
            vector<int>anslevel;
            stack<int>st;
            for(int i=1;i<=n;i++)
            {
                        temp=q.front();
                        q.pop();
                        if(cnt%2==1)
                        {
                            
                            
                            anslevel.push_back(temp->val);
                        }
                        else
                        {
                            st.push(temp->val);
                            

                        }

                    if(temp->left)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
            }
            while(!st.empty())
            {
                anslevel.push_back(st.top());
                st.pop();
            }
            ans.push_back(anslevel);
            cnt++;
            
        }
        return ans;
        
    }
};