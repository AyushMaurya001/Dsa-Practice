// link: https://www.codingninjas.com/studio/problems/remove-identical-from-ll_2271447?leftPanelTab=0

/********************************************************

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

********************************************************/

Node *removeDuplicates(Node *head) {
	
	if (head==NULL || head->next==NULL) return head;
	Node* pre=NULL; Node* curr=head;
	while (curr!=NULL && curr->next!=NULL){
		if (curr->data == curr->next->data){
			int value=curr->data;
			while (curr!=NULL){
				if (curr->data == value) curr=curr->next;
				else break;
			}
			if (pre!=NULL) pre->next=curr;
			else head=curr;
		} else {
			pre=curr;
			curr=curr->next;
		}
	}
	return head;

}