// link: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTab=0

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

void countLeaf(BinaryTreeNode<int> *root, int &cnt){
    if (root==NULL) return;
    if (root->left==NULL && root->right==NULL){
        cnt++; return;
    }
    if (root->left!=NULL) countLeaf(root->left, cnt);
    if (root->right!=NULL) countLeaf(root->right, cnt);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    
    int cnt=0; countLeaf(root, cnt); return cnt;
    
}