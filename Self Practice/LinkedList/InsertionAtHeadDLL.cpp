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

void insert(node* &head, int n){

    node* temp = new node(n);
    temp->next=head;
    head->pre=temp;
    head=temp;

}

int main(){
    
    node* head = new node(40);
    print(head);
    insert(head, 39);
    print(head);
    insert(head, 20);
    print(head);
    insert(head, 11);
    print(head);
    
    return 0;
}