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

void deletionOfVal(node* &head, int n){

    if (head->val==n){
        head=head->next;
        return;
    }
    int i=1;
    node* p=head;
    node* pre=head;
    while (head!=NULL){
        if (head->val==n){
            break;
        }
        pre=head;
        head=head->next;
    }
    pre->next=head->next;
    head=p;

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
    deletionOfVal(head, 1);
    print(head);
    deletionOfVal(head, 90);
    print(head);
    deletionOfVal(head, 2);
    print(head);
    deletionOfVal(head, 99);
    print(head);
    
    return 0;
}