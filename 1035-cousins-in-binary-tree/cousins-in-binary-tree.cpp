class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*, TreeNode*>> q;
        
        
        q.push({root, nullptr});

        while (!q.empty()) {
            int n = q.size();

            TreeNode* xParent = nullptr;
            TreeNode* yParent = nullptr;

            for (int i = 0; i < n; i++) {
                auto [node, parent] = q.front();
                q.pop();

                if (node->val == x)
                    xParent = parent;

                if (node->val == y)
                    yParent = parent;

                if (node->left)
                    q.push({node->left, node});

                if (node->right)
                    q.push({node->right, node});
            }

            
            if (xParent || yParent) {
                return xParent != nullptr && 
                       yParent != nullptr && 
                       xParent != yParent;
            }
        }

        return false;
    }
};