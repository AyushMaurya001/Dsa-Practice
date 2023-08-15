// link: https://practice.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */

struct Node* middle(struct Node* head){
    
    struct Node* slow=head; struct Node* fast=head->next;
    while (fast!=NULL && fast->next!=NULL){
        slow=slow->next; fast=fast->next->next;
    }
    return slow;
    
}

struct Node* merge(struct Node* l, struct Node* r){
    
    if (l==NULL) return r; if (r==NULL) return l;
    struct Node* ans= new Node(0); struct Node* dummy=ans;
    while (l!=NULL && r!=NULL){
        if (l->data <= r->data){
            dummy->next=l; dummy=l; l=l->next;
        } else {
            dummy->next=r; dummy=r; r=r->next;
        }
    }
    while (l!=NULL){
        dummy->next=l; dummy=l; l=l->next;
    }
    while (r!=NULL){
        dummy->next=r; dummy=r; r=r->next;
    }
    return ans->next;
    
}

struct Node* msort(struct Node *head){
    
    if (head==NULL || head->next==NULL) return head;
    struct Node* mid=middle(head);
    struct Node* left=head; struct Node* right=mid->next; mid->next=NULL;
    left=msort(left); right=msort(right);
    return merge(left, right);
    
}

//Function to sort the given doubly linked list using Merge Sort.
struct Node *sortDoubly(struct Node *head)
{
	
	struct Node* ans=msort(head);
	struct Node* pre=NULL; struct Node* curr=ans;
	while (curr!=NULL){
	    curr->prev=pre; pre=curr; curr=curr->next;
	}
	return ans;
	
}


//{ Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

// } Driver Code Ends