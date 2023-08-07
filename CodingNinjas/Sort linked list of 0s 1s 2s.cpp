// link: https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    
    int zero=0, one=0, two=0;
    Node* curr=head;
    while (curr!=NULL){
        if (curr->data==0) zero++;
        else if (curr->data==1) one++;
        else two++;
        curr=curr->next;
    }
    curr=head;
    while (zero>0){
        curr->data=0; curr=curr->next; zero--;
    }
    while (one>0){
        curr->data=1; curr=curr->next; one--;
    }
    while (two>0){
        curr->data=2; curr=curr->next; two--;
    }
    return head;

}