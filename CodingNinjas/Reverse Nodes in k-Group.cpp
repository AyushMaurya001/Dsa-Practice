// link: https://www.codingninjas.com/studio/problems/reverse-blocks_763406?leftPanelTab=0

#include <bits/stdc++.h>

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

Node* KRev(Node* head, int p, int n, int b[]){

	if (head==NULL || head->next==NULL) return head;
	int k, i=0;
	if (p<n) k=b[p];
	else k=1;
	if (k==0){
		return KRev(head, p+1, n, b);
	}
	Node* pre=NULL; Node* curr=head; Node* post=NULL;
	while (curr!=NULL && i<k){
		i++;
		post=curr->next;
		curr->next=pre;
		pre=curr;
		curr=post;
	}
	if (curr!=NULL) head->next=KRev(curr, p+1, n, b);
	return pre;

}

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	
	return KRev(head, 0, n, b);

}