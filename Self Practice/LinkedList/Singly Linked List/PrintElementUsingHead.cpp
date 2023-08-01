#include <iostream>
using namespace std;

class node{

    public:
    int val;
    node* next;

    node(){
        val=0; next=NULL;
    }
    node(int n){
        val=n; next=NULL;
    }

};

void insertAtHead(node* &head, int a){

    node* temp = new node(a);
    temp->next=head;
    head=temp;

}

void print(node* head){

    while (head!=NULL){
        cout << head->val << " ";
        head=head->next;
    }
    cout << endl;

}

int main(){

    node* head = new node(1);
    insertAtHead(head, 22);
    insertAtHead(head, 222);
    insertAtHead(head, 23);
    insertAtHead(head, 233);
    print(head);

    return 0;
}