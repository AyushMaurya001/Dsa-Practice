// link: https://www.codingninjas.com/studio/problems/reverse-dll-nodes-in-groups_920399?leftPanelTab=0

#include <bits/stdc++.h> 
/*********************************************************

    Following is the class structure of the Node class:

    class Node
	{
	public:
	    int data;
	    Node *next;
	    Node *prev;
	    Node(int data)
	    {
	        this->data = data;
	        this->next = NULL;
	        this->prev = NULL;
	    }
	};

************************************************************/

Node* reverseDLLInGroups(Node* head, int k){	
    
	if (k==1 || head==NULL || head->next==NULL) return head;
	int i=0;
	Node* pre=NULL; Node* curr=head; Node* post=NULL;
	while (i<k && curr!=NULL){
		i++;
		post=curr->next;
		curr->next=pre;
		pre=curr;
		curr=post;
	}
	if (curr!=NULL) head->next=reverseDLLInGroups(curr, k);
	return pre;

}

