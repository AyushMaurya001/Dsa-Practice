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
        
        if (root==NULL) return {};
        vector<vector<int>> ans; vector<int> vtemp;
        queue<TreeNode*> q; q.push(root); q.push(NULL);
        while (!q.empty()){
            TreeNode* temp=q.front(); q.pop();
            if (temp==NULL){
                ans.push_back(vtemp); vtemp.clear();
                if (!q.empty()) q.push(NULL);
            } else {
                vtemp.push_back(temp->val);
                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
            }
        }
        return ans;

    }
};