// link: https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331?leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
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
*****************************************************************/

Node *removeDuplicates(Node *head){
    
    if (head==NULL || head->next==NULL) return head;
    unordered_map <int, bool> visited;
    Node* curr=head; Node* pre=NULL;
    while (curr!=NULL){
        if (visited[curr->data]==1){
            pre->next=curr->next;
            curr=curr->next;
            continue;
        } else visited[curr->data]=1;
        pre=curr;
        curr=curr->next;
    }
    return head;

}