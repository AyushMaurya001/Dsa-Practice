// link: https://www.codingninjas.com/studio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int length(Node* head){

    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;

}

Node* krev(Node* head, int k, int len){

    if (k==1 || len<k || head==NULL) return head;

    int i=0;
    Node* pre=NULL; Node* curr=head; Node* post=NULL;
    while (curr!=NULL && i<k){
        i++;
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }

    if (curr!=NULL) head->next=krev(curr, k, len-k);

    return pre;

}

Node* kReverse(Node* head, int k) {

    int len=length(head);
    return krev(head, k, len);
    
}