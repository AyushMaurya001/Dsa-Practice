// link: https://www.codingninjas.com/studio/problems/clone-a-linked-list-with-random-pointers_983604?leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */

Node *cloneLL(Node *head){
	
	if (head==NULL) return NULL;

	Node* curr1=head;
	Node* copy= new Node(curr1->data); curr1=curr1->next;
	Node* curr2=copy;
	while (curr1!=NULL){
		Node* temp= new Node(curr1->data);
		curr2->next=temp; curr2=temp;
		curr1=curr1->next;
	}

	curr1=head; curr2=copy;
	while (curr1!=NULL && curr2!=NULL){
		Node* temp=curr1->next;
		curr1->next=curr2;
		curr1=temp;
		temp=curr2->next;
		curr2->next=curr1;
		curr2=temp;
	}

	curr1=head; curr2=copy;
	while (curr1!=NULL && curr2!=NULL){
		if (curr1->random==NULL) curr2->random=NULL;
		else curr2->random=curr1->random->next;
		curr1=curr2->next;
		if (curr1==NULL) break;
		curr2=curr1->next;
	}

	curr1=head; curr2=copy;
	while (curr1!=NULL && curr2!=NULL){
		curr1->next=curr2->next;
		curr1=curr1->next;
		if (curr1!=NULL) curr2->next=curr1->next;
		curr2=curr2->next;
	}

	return copy;

}