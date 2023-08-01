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

int lengthOfNode(node* head){

    int i=0;
    while (head!=NULL){
        i++;
        head=head->next;
    }
    return i;

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

void insertAtPos(node* &head, node* &tail, int pos, int a){

    if (pos==1){
        node* temp = new node(a);
        temp->next=head;
        head->pre=temp;
        head=temp;
        return;
    }
    int n=lengthOfNode(head);
    if (pos==n+1){
        node* temp = new node(a);
        tail->next=temp;
        temp->pre=tail;
        tail=temp;
        return;
    }
    int i=1;
    node* current=head;
    while (i+1!=pos){
        head=head->next; i++;
    }
    node* temp = new node(a);
    temp->next=head->next;
    temp->pre=head;
    head->next=temp;
    node* temp1=temp->next;
    temp1->pre=temp;
    head=current;

}

void deletionAtHead(node* &head){

    node* temp=head;
    head=head->next;
    head->pre=NULL;
    delete temp;

}

int main(){
    
    node* head = new node(4);
    node* tail=head;
    print(head);
    insertAtPos(head, tail, 1, 1);
    print(head);
    insertAtPos(head, tail, 3, 11);
    print(head);
    insertAtPos(head, tail, 4, 99);
    deletionAtHead(head);
    print(head);
    insertAtPos(head, tail, 1, 0);
    print(head);
    insertAtPos(head, tail, 4, 919);
    print(head);
    deletionAtHead(head);
    insertAtPos(head, tail, 3, 110);
    print(head);
    
    return 0;
}