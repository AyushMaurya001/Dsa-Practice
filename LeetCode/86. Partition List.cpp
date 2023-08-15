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
public:
    ListNode* partition(ListNode* head, int x) {
        
        if (head==NULL || head->next==NULL) return head;
        ListNode* ans= new ListNode(0); ListNode* dummy=ans;
        ListNode* pre=NULL; ListNode* curr=head;
        while (curr!=NULL){
            if (curr->val < x){
                dummy->next=curr; dummy=dummy->next;
                if (pre!=NULL){
                    pre->next=curr->next;
                    curr=curr->next;
                } else {
                    curr=curr->next;
                    head=curr;
                }
            } else {
                pre=curr; curr=curr->next;
            }
        }
        dummy->next=head;
        return ans->next;

    }
};