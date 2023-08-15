// link: https://www.codingninjas.com/studio/problems/merge-sort-linked-list_920473?leftPanelTab=0

#include <bits/stdc++.h> 
/**********************************************************************

    Following is the class structure of the Node class for reference:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

********************************************************************/
Node* middle(Node* head){

    Node* slow=head; Node* fast=head->next;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}

Node* merge(Node* a, Node* b){

    if (a==NULL) return b; if (b==NULL) return a;
    Node* ans= new Node(0); Node* dummy=ans;
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

Node* msort(Node* head){

    if (head==NULL || head->next==NULL) return head;
    Node* mid=middle(head);
    Node* left=head; Node* right=mid->next; mid->next=NULL;
    left=msort(left); right=msort(right);
    return merge(left, right);

}

Node *sortLL(Node *head){
    
    return msort(head);

}