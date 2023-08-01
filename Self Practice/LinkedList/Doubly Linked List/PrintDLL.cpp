#include <iostream>
using namespace std;

class node{

    public:
    int val; node* pre; node* nxt;

    node(int n){
        val=n; pre=NULL; nxt=NULL;
    }

};

void print(node* head){

    while (head!=NULL){
        cout << head->val << " ";
        head=head->nxt;
    }
    cout << endl;

}

void insert(node* &head, int n){

    node* temp = new node(n);
    temp->nxt=head;
    head->pre=temp;
    head=temp;

}

int lengthOfNode(node* head){

    int i=0;
    while (head!=NULL){
        i++;
        head=head->nxt;
    }
    return i;

}

int main(){
    
    node* head = new node(4);
    print(head);
    insert(head, 3);
    print(head);
    insert(head, 2);
    print(head);
    insert(head, 1);
    print(head);
    cout << lengthOfNode(head) << endl;
    
    return 0;
}