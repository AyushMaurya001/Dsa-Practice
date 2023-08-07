// link: https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248?leftPanelTab=0

/****************************************************************

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

*****************************************************************/

Node* rev(Node* head){

    Node* pre=NULL; Node* curr=head; Node* post=head;
    while (curr!=NULL){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }
    return pre;

}

bool isPalindrome(Node *head){
    
    Node* fast=head; Node* slow=head;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp=rev(slow);
    while (temp!=NULL && head!=slow){
        if (temp->data != head->data) return false;
        temp=temp->next;
        head=head->next;
    }
    return true;

}