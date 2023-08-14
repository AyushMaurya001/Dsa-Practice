link:https://practice.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

// } Driver Code Ends
//User function Template for C++

/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        
        struct Node* pre=NULL; struct Node* curr=head;
        while (curr!=NULL && curr->next!=NULL){
            if (curr->data == curr->next->data){
                int value=curr->data;
                while (curr!=NULL){
                    if (curr->data == value) curr=curr->next;
                    else break;
                }
                if (pre==NULL) head=curr;
                else pre->next=curr;
            } else {
                pre=curr; curr=curr->next;
            }
        }
        return head;
        
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}

// } Driver Code Ends