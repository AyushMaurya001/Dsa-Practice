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

int length(Node* head){

    int cnt=0;
    while (head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;

}

Node *findMiddle(Node *head) {
    
    int n=length(head);
    if(n==0 || n==1) return head;
    int i=1, middle=(n/2)+1;
    while (i!=middle){
        i++;
        head=head->next;
    }
    return head;

}

