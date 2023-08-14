// link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    
    private:
    struct Node* rev(struct Node* head){
        
        struct Node* pre=NULL; struct Node* curr=head; struct Node* post=NULL;
        while (curr!=NULL){
            post=curr->next;
            curr->next=pre;
            pre=curr;
            curr=post;
        }
        return pre;
        
    }
    
    struct Node* add(struct Node* a, struct Node* b, int c){
        
        struct Node* ans= new Node(0);
        struct Node* dummy=ans;
        while (a!=NULL && b!=NULL){
            int sum=(a->data)+(b->data)+c;
            Node* temp= new Node(sum%10);
            dummy->next=temp; dummy=dummy->next;
            a=a->next; b=b->next; c=sum/10;
        }
        while (a!=NULL){
            int sum=(a->data)+c;
            Node* temp= new Node(sum%10);
            dummy->next=temp; dummy=dummy->next;
            a=a->next; c=sum/10;
        }
        while (b!=NULL){
            int sum=(b->data)+c;
            Node* temp= new Node(sum%10);
            dummy->next=temp; dummy=dummy->next;
            b=b->next; c=sum/10;
        }
        if (c>0){
            Node* temp= new Node(c);
            dummy->next=temp;
        }
        return ans->next;
        
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        if (first==NULL) return second;
        if (second==NULL) return first;
        first=rev(first); second=rev(second);
        struct Node* ans=add(first, second, 0);
        return rev(ans);
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends