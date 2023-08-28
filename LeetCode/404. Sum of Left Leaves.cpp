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
    void addLeft(TreeNode* root, int &ans, bool add){
        if (root==NULL) return;
        if (root->left==NULL && root->right==NULL && add) ans+=(root->val);
        if (root->left!=NULL) addLeft(root->left, ans, 1);
        if (root->right!=NULL) addLeft(root->right, ans, 0);
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        addLeft(root->left, sum, 1);
        addLeft(root->right, sum, 0);
        return sum;
    }
};