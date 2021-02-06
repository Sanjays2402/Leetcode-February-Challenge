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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> right;
        if(root == NULL)
            return right;
        
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode *pre = q.front();
                q.pop();
                if(pre->left)
                    q.push(pre->left);
                if(pre->right)
                    q.push(pre->right);
                if(i == n-1)
                    right.push_back(pre->val);
            }
        }
        
        return right;
    }
};
