// link: https://practice.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/

struct Node * rev(Node* head){
    
    Node* pre=NULL;
    Node* curr=head;
    Node* post=NULL;
    while (curr){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }
    return pre;
    
}

struct Node * mergeResult(Node *node1,Node *node2){
    
    Node* n1=rev(node1);
    Node* n2=rev(node2);
    
    if (n1==NULL) return n2;
    if (n2==NULL) return n1;
    Node* temp=newNode(0);
    Node* start=temp;
    while (n1 && n2){
        if (n1->data > n2->data){
            temp->next=n1;
            temp=temp->next; n1=n1->next;
        } else {
            temp->next=n2;
            temp=temp->next; n2=n2->next;
        }
    }
    while (n1){
        temp->next=n1;
        temp=temp->next; n1=n1->next;
    }
    while (n2){
        temp->next=n2;
        temp=temp->next; n2=n2->next;
    }
    return start->next;
    
}