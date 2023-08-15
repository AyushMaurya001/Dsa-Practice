// link: https://www.codingninjas.com/studio/problems/mergesort-linked-list_630514?leftPanelTab=0

/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/

node* middle(node* head){

    node* slow=head; node* fast=head->next;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}

node* merge(node* a, node* b){

    if (a==NULL) return b;
    if (b==NULL) return a;
    node* ans= new node(0); node* dummy=ans;
    while (a!=NULL && b!=NULL){
        if (a->data <= b->data){
            dummy->next=a; dummy=a; a=a->next;
        } else {
            dummy->next=b; dummy=b; b=b->next;
        }
    }
    while (a!=NULL){
        dummy->next=a; dummy=a; a=a->next;
    }
    while (b!=NULL){
        dummy->next=b; dummy=b; b=b->next;
    }
    return ans->next;

}

node* mergeSort(node *head) {
    
    if (head==NULL || head->next==NULL) return head;
    node* mid=middle(head);
    node* left=head; node* right=mid->next;
    mid->next=NULL;
    left=mergeSort(left); right=mergeSort(right);
    return merge(left, right);

}
