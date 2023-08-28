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

    // cout << "Enter the value of root node: " << endl;
    int n;
    cin >> n;
    if (n==0) return NULL;
    root= new Node(n);
    // cout << "Enter the value of " << n << "'s left node: " << endl;
    root->left=buildTree(root);
    // cout << "Enter the value of " << n << "'s right node: " << endl;
    root->right=buildTree(root);

    return root;

}

void printTree(Node* root){

    queue<Node*> q;
    q.push(root); q.push(NULL);
    while (!q.empty()){
        Node* temp=q.front();
        q.pop();
        if (temp==NULL){
            cout << endl;
            if (!q.empty()) q.push(NULL);
        } else {
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }

}

int main(){
    
    Node* root= new Node();
    root=buildTree(root);
    printTree(root);
    
    return 0;
}