// link: https://www.codingninjas.com/studio/problems/detect-the-cycle_1822910?leftPanelTab=0

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

bool detectCycle(Node *head){
	
	Node* fast=head; Node* slow=head;
	while (fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if (fast==slow) return 1;
	}
	return 0;

}