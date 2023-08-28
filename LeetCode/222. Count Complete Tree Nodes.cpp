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

private:
    void count(TreeNode* root, int &cnt){
        if (root==NULL) return;
        cnt++;
        if (root->left!=NULL) count(root->left, cnt);
        if (root->right!=NULL) count(root->right, cnt);
    }

public:
    int countNodes(TreeNode* root) {
        int cnt=0;
        count(root, cnt);
        return cnt;
    }
};