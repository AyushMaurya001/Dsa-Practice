// link: https://www.codingninjas.com/studio/problems/delete-node-in-ll_5881?leftPanelTab=0

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

Node *deleteNode(Node *head, int pos){
    
	if (head==NULL) return head;
	if (pos==0) return head->next;
	int cnt=0;
	Node* pre=NULL; Node* curr=head;
	while (head!=NULL){
		if (cnt==pos){
			pre->next=head->next;
			return curr;
		}
		cnt++;
		pre=head;
		head=head->next;
	}
	return curr;

}
