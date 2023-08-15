/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

private:
    ListNode* middle(ListNode* head){

        ListNode* slow=head; ListNode* fast=head->next;
        while (fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }

    ListNode* merge(ListNode* l, ListNode* r){

        if (l==NULL) return r;
        if (r==NULL) return l;
        ListNode* ans= new ListNode(0); ListNode* dummy=ans;
        while (l!=NULL && r!=NULL){
            if (l->val <= r->val){
                dummy->next=l; l=l->next; dummy=dummy->next;
            } else {
                dummy->next=r; r=r->next; dummy=dummy->next;
            }
        }
        while (l!=NULL){
            dummy->next=l; l=l->next; dummy=dummy->next;
        }
        while (r!=NULL){
            dummy->next=r; r=r->next; dummy=dummy->next;
        }
        return ans->next;

    }

    ListNode* msort(ListNode* head){

        if (head==NULL || head->next==NULL) return head;
        ListNode* mid=middle(head);
        ListNode* left=head; ListNode* right=mid->next;
        mid->next=NULL;
        left=msort(left); right=msort(right);
        return merge(left, right);

    }

public:
    ListNode* sortList(ListNode* head) {
        
        return msort(head);

    }
};