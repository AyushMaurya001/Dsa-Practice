// link: https://www.codingninjas.com/studio/problems/code-merge-sort_5907?leftPanelTab=0

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

Node* middle(Node* head){

	Node* fast=head->next; Node* slow=head;
	while (fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;

}

Node* merge(Node* a, Node* b){

	Node* ans= new Node(0); Node* dummy=ans;
	while (a!=NULL && b!=NULL){
		if (a->data <= b->data){
			dummy->next=a; dummy=dummy->next; a=a->next;
		} else {
			dummy->next=b; dummy=dummy->next; b=b->next;
		}
	}
	while (a!=NULL){
		dummy->next=a; dummy=dummy->next; a=a->next;
	}
	while (b!=NULL){
		dummy->next=b; dummy=dummy->next; b=b->next;
	}
	return ans->next;

}

Node *mergeSort(Node *head)
{
	if (head==NULL || head->next==NULL) return head;
	Node* mid=middle(head);
	Node* first=head; Node* second=mid->next;
	mid->next=NULL;
	first=mergeSort(first); second=mergeSort(second);
	return merge(first, second);

}