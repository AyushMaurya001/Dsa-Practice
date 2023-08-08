// link: https://www.codingninjas.com/studio/problems/add-two-linked-lists_799487?leftPanelTab=0

#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/

void rev(Node<int>* &head){

    Node<int>* pre=NULL; Node<int>* post=NULL;
    while (head!=NULL){
        post=head->next;
        head->next=pre;
        pre=head;
        head=post;
    }
    head=pre;

}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    
    rev(first);
    rev(second);
    vector<int> num; int carry=0;
    while (first and second){
        int digit=(carry+(first->data)+(second->data))%10;
        carry=(carry+(first->data)+(second->data))/10;
        num.push_back(digit);
        first=first->next; second=second->next;
    }
    while (first){
        int digit=(carry+(first->data))%10;
        carry=(carry+(first->data))/10;
        num.push_back(digit);
        first=first->next;
    }
    while (second){
        int digit=(carry+(second->data))%10;
        carry=(carry+(second->data))/10;
        num.push_back(digit);
        second=second->next;
    }
    if (carry>0) num.push_back(carry);
    int i=num.size()-1;
    Node<int>* dummy= new Node<int>(0);
    Node<int>* ans=dummy;
    while (i>=0){
        Node<int>* temp= new Node<int>(num[i--]);
        dummy->next=temp;
        dummy=dummy->next;
    }
    return ans->next;

}