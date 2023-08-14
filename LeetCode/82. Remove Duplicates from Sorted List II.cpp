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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* pre=NULL; ListNode* curr=head;
        while (curr!=NULL && curr->next!=NULL){
            if (curr->val==curr->next->val){
                int value=curr->val;
                while (curr!=NULL){
                    if (curr->val==value) curr=curr->next;
                    else break;
                }
                if (pre!=NULL) pre->next=curr;
                else head=curr;
            } else {
                pre=curr;
                curr=curr->next;
            }
        }
        return head;

    }
};