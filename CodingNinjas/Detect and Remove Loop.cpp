// link: https://www.codingninjas.com/studio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0

/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

bool detectWithPoint(Node* &head){

    Node* fast=head; Node* slow=head;
    while (fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if (fast==slow){
            slow=head;
            while (fast!=slow){
                fast=fast->next;
                slow=slow->next;
            }
            head=slow;
            return true;
        }
    }
    return false;

}

void remove(Node* head, Node* error){

    while (head!=NULL){
        if (head->next==error) head->next=NULL;
        head=head->next;
    }

}

Node *removeLoop(Node *head){
    
    Node* curr=head;
    if (detectWithPoint(curr)) remove(curr, curr);
    return head;

}