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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v2; 
        if(root == NULL) return v2;
        queue<TreeNode*> q; 
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            int sz = q.size();
            for (int i = 0; i < sz; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                v.push_back(node->val);
            }
            v2.push_back(v);
        }
        return v2;
        
    }
};