#include <iostream>
using namespace std;

class node{

    public:
    int val; node* pre; node* next;

    node(int n){
        val=n; pre=NULL; next=NULL;
    }

};

void print(node* head){

    while (head!=NULL){
        cout << head->val << " ";
        head=head->next;
    }
    cout << endl;

}

void insertAtHead(node* &head, int n){

    node* temp = new node(n);
    temp->next=head;
    head->pre=temp;
    head=temp;

}

void insertAtTail(node* &tail, int n){

    node* temp = new node(n);
    tail->next=temp;
    temp->pre=tail;
    tail=temp;

}

int main(){
    
    node* head = new node(4);
    node* tail=head;
    print(head);
    insertAtTail(tail, 3);
    print(head);
    insertAtTail(tail, 2);
    print(head);
    insertAtTail(tail, 1);
    print(head);
    
    return 0;
}