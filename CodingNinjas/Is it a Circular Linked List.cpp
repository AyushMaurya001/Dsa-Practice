// link: https://www.codingninjas.com/studio/problems/is-it-a-circular-linked-list_981265?leftPanelTab=0

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

bool circularLL(Node* head){
    
	if (head->next==head) return true;
	Node* org=head;
	while (head!=NULL){
		if (head->next==org) return true;
		head=head->next;
	}
	return false;

}
