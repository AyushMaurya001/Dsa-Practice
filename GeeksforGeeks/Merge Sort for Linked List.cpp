// link: https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1

//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
    
  private:
    Node* middle(Node* head){
        
        Node* slow=head; Node* fast=head->next;
        while (fast!=NULL && fast->next!=NULL){
            slow=head->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
    
    Node* merge(Node* a, Node* b){
        
        Node* ans= new Node(0); Node* dummy=ans;
        while (a!=NULL && b!=NULL){
            if (a->data <= b->data){
                dummy->next=a; dummy=dummy->next; a=a->next;
            } else {
                dummy->next=b; dummy=dummy->next; b=b->next;
            }
        }
        while (a!=NULL){
            dummy->next=a; dummy=dummy->next; a=a->next;
        }
        while (b!=NULL){
            dummy->next=b; dummy=dummy->next; b=b->next;
        }
        return ans->next;
        
    }
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        
        if (head==NULL || head->next==NULL) return head;
        
        Node* mid=middle(head);
        Node* first=head; Node* second=mid->next;
        mid->next=NULL;
        first=mergeSort(first);
        second=mergeSort(second);
        
        return merge(first, second);
        
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends