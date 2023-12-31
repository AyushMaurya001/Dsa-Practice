#include <iostream>
using namespace std;

class node{

    public:
    int val; node* next;
    
    node(){
        val=0; next=NULL;
    }
    node(int n){
        val=n; next=NULL;
    }

};

void print(node* head){

    while (head!=NULL){
        cout << head->val << " ";
        head=head->next;
    }
    cout << endl;

}

void insertionAtPosition(node* &head, int pos, int n){

    node* temp = new node(n);
    if (pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    int i=1;
    node* p=head;
    while (i+1!=pos){
        head=head->next; i++;
    }
    if (head->next==NULL){
        head->next=temp;
    } else {
        temp->next=head->next;
        head->next=temp;
    }
    head=p;

}

void deletionAtPos(node* &head, int pos){

    if (pos==1){
        head=head->next;
        return;
    }
    int i=1;
    node* current=head;
    node* pre=head;
    while (i!=pos){
        pre=head;
        head=head->next;
        i++;
    }
    pre->next=head->next;
    head=current;

}

int main(){
    
    node* head = new node(1);
    insertionAtPosition(head, 1, 10);
    insertionAtPosition(head, 1, 2);
    insertionAtPosition(head, 2, 3);
    insertionAtPosition(head, 4, 100);
    insertionAtPosition(head, 3, 99);
    insertionAtPosition(head, 7, 90);
    print(head);
    deletionAtPos(head, 7);
    print(head);
    deletionAtPos(head, 3);
    print(head);
    deletionAtPos(head, 1);
    print(head);
    
    return 0;
}