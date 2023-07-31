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

void insertAtGivenPosition(node* &head, int n, int pos){

    node* temp = new node(n);
    if (pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    int i=1;
    node* p=head;
    while (i!=pos-1){
        head=head->next; i++;
    }
    if (head->next!=NULL){
        temp->next=head->next;
        head->next=temp;
    } else {
        head->next=temp;
    }
    head=p;

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
    insertAtGivenPosition(head, 2, 2);
    insertAtGivenPosition(head, 33, 3);
    insertAtGivenPosition(head, 32, 3);
    insertAtGivenPosition(head, 2, 1);
    insertAtGivenPosition(head, 11, 6);
    insertAtGivenPosition(head, 11, 1);
    print(head);
    
    return 0;
}