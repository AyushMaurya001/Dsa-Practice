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

void insertAtTail(node* &tail, int a){

    node* temp = new node(a);
    tail->next=temp;
    tail=temp;

}

void print(node* head){

    while (head!=NULL){
        cout << head->val << " ";
        head=head->next;
    }
    cout << endl;

}

int main(){
    
    node* tail = new node(1);
    node* head = tail;
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 22);
    print(head);
    
    return 0;
}