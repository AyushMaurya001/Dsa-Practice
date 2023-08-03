link: https://www.codingninjas.com/studio/problems/reverse-a-doubly-linked-list_1116098?leftPanelTab=0

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head){   
    
    while (head!=NULL){
        Node* temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        if (temp==NULL) return head;
        head=temp;
    }
    return head;

}

