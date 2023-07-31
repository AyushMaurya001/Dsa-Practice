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
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 9);
    print(head);

    return 0;
}