// link: https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118786/offering/1381239?leftPanelTab=0

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

Node* revK(Node* head, int i, int n, int b[]){

	if (i>=n) return head;
	int k=b[i];

	if (head==NULL || head->next==NULL) return head;

	if (k==0) return revK(head, i+1, n, b);

	Node* pre=NULL; Node* curr=head; Node* post=NULL; int j=0;
	while (curr!=NULL && j<k){
		j++;
		post=curr->next;
		curr->next=pre;
		pre=curr;
		curr=post;
	}

	if (curr!=NULL) head->next=revK(curr, i+1, n, b);

	return pre;

}

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	
	if (n==0) return head;

	return revK(head, 0, n, b);

}