// link: https://www.codingninjas.com/studio/problems/flatten-a-linked-list_1112655?leftPanelTab=0

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* merge(Node* p, Node* q){

	if (p==NULL) return q;
	if (q==NULL) return p;
	Node* ans= new Node(); Node* curr=ans;
	while (p!=NULL && q!=NULL){
		if (p->data <= q->data){
			curr->child=p; curr=curr->child; p=p->child;
		} else {
			curr->child=q; curr=curr->child; q=q->child;
		}
	}
	while (p!=NULL){
		curr->child=p; curr=curr->child; p=p->child;
	}
	while (q!=NULL){
		curr->child=q; curr=curr->child; q=q->child;
	}
	return ans->child;

}

Node* flattenLinkedList(Node* head) 
{
	
	if(head == NULL || head -> next == NULL) return head;
    Node* temp=flattenLinkedList(head->next);
    head->next=NULL;
    return merge(head, temp);

}
