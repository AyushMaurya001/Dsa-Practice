// link: https://www.codingninjas.com/studio/problems/code-merge-two-sorted-ll_29709?leftPanelTab=0

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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){
    
	if (head1==NULL) return head2;
	if (head2==NULL) return head1;
	Node* ans = new Node(-1);
	Node* start=ans;
	while (head1!=NULL && head2!=NULL){
		if (head1->data <= head2->data){
			Node* temp = new Node(head1->data);
			ans->next=temp;
			ans=ans->next;
			head1=head1->next;
		} else {
			Node* temp = new Node(head2->data);
			ans->next=temp;
			ans=ans->next;
			head2=head2->next;
		}
	}
	while (head1!=NULL){
		Node* temp = new Node(head1->data);
		ans->next=temp;
		ans=ans->next;
		head1=head1->next;
	}
	while (head2!=NULL){
		Node* temp = new Node(head2->data);
		ans->next=temp;
		ans=ans->next;
		head2=head2->next;
	}
	return start->next;

}