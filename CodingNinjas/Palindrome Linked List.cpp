// link: https://www.codingninjas.com/studio/problems/palindrom-linked-list_799352?leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* rev(LinkedListNode<int>* head){

    LinkedListNode<int>* pre=NULL; LinkedListNode<int>* curr=head; LinkedListNode<int>* post=head;
    while (curr!=NULL){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }
    return pre;

}

bool isPalindrome(LinkedListNode<int> *head) {
    
    LinkedListNode<int>* fast=head; LinkedListNode<int>* slow=head;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    LinkedListNode<int>* temp=rev(slow);
    while (temp!=NULL && head!=slow){
        if (temp->data != head->data) return false;
        temp=temp->next;
        head=head->next;
    }
    return true;

}