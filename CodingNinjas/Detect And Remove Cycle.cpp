// link: https://www.codingninjas.com/studio/problems/detect-and-remove-cycle_920523?leftPanelTab=0

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

bool detectWithPoint(Node* &head){

	Node* fast=head; Node* slow=head;
	while (fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if (fast==slow){
			slow=head;
			while (fast!=slow){
				slow=slow->next;
				fast=fast->next;
			}
			head=slow;
			return true;
		}
	}
	return false;

}

void remove(Node* curr, Node* error){

	while (curr!=NULL){
		if (curr->next==error){
			curr->next=NULL; return;
		}
		curr=curr->next;
	}

}

bool detectAndRemoveCycle(Node* head){
    
	Node* curr=head;
	bool a=detectWithPoint(curr);
	if (detectWithPoint(curr)){
		remove(curr, curr);
		return true;
	}
	return false;

}
