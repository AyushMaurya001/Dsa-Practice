// link: https://www.codingninjas.com/studio/problems/add-one-to-linked-list_7100680?leftPanelTab=0

/**
 * Definition of linked list
 * class ListNode {
 *     int val;
 *     ListNode* next;
 *     ListNode(int val = 0) {
 *         this -> val = val;
 *     }
 *     ListNode(int val, ListNode* next) {
 *         this -> val = val;
 *         this -> next = next;
 *     }
 * }
 */

ListNode* rev(ListNode* head){

    ListNode* pre=NULL; ListNode* curr=head; ListNode* post=NULL;
    while (curr!=NULL){
        post=curr->next;
        curr->next=pre;
        pre=curr;
        curr=post;
    }
    return pre;

}

ListNode* add(ListNode* head, int c){

    ListNode* ans= new ListNode(0); ListNode* curr=ans;
    while (head!=NULL){
        int sum=(head->val)+c;
        ListNode* temp= new ListNode(sum%10);
        curr->next=temp; curr=temp; head=head->next;
        c=sum/10;
    }
    if (c>0){
        ListNode* temp= new ListNode(c);
        curr->next=temp;
    }
    return ans->next;

}

ListNode* addOneToLinkedList(ListNode* head) {
    
    head=rev(head);
    head=add(head, 1);
    return rev(head);

}
