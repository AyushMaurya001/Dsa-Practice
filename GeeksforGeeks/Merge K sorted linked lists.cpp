// link: https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1

//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
    
  public:
    Node* merge(Node* a, Node* b){
        
        if (a==NULL) return b;
        if (b==NULL) return a;
        Node* temp = new Node(-10000000);
        Node* ans=temp;
        while (a and b){
            if (a->data < b->data){
                temp->next=a;
                temp=temp->next;
                a=a->next;
            } else {
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
        }
        while (a){
            temp->next=a;
            temp=temp->next;
            a=a->next;
        }
        while (b){
            temp->next=b;
            temp=temp->next;
            b=b->next;
        }
        return ans->next;
        
    }
    
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k){
        
        if (k==1) return arr[0];
        int i=0;
        Node* ans= new Node(-10000000);
        Node* temp=ans;
        while (i<k){
            merge(arr[i], ans);
            i++;
        }
        return temp->next;
        
    }
};



//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

// } Driver Code Ends