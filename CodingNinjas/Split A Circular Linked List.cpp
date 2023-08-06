// link: https://www.codingninjas.com/studio/problems/split-a-circular-linked-list_1071003?leftPanelTab=0

#include <bits/stdc++.h> 
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

int length(Node* head){

    int cnt=0;
    while (head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;

}

void splitCircularList(Node *head){
    
    Node* fast=head->next; Node* slow=head;
    while (fast!=head && fast->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=slow->next;
    Node* temp=slow->next;
    slow->next=head;
    while (temp!=NULL){
        if (temp->next==head){
            temp->next=fast;
            break;
        }
        temp=temp->next;
    }

}
