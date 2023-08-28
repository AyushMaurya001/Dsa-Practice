#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

    Node(){

    }

    Node(int n){
        data=n; left=NULL; right=NULL;
    }

};

Node* buildTree(Node* root){

    cout << "Enter the value of root node: " << endl;
    int n;
    cin >> n;
    if (n==0) return NULL;
    root= new Node(n);

    cout << "Enter the value of " << n << "'s left node: " << endl;
    root->left=buildTree(root);
    cout << "Enter the value of " << n << "'s right node: " << endl;
    root->right=buildTree(root);

    return root;

}

int main(){
    
    Node* root= new Node();
    root=buildTree(root);
    
    return 0;
}