// link: https://www.codingninjas.com/studio/problems/reverse-linked-list_920513?leftPanelTab=0

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

Node* reverseLinkedList(Node *head){
    
    Node* pre=NULL;
    while (head!=NULL){
        Node* post=head->next;
        head->next=pre;
        pre=head;
        head=post;
    }
    return pre;

}
