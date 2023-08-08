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
    void rev(ListNode* &head){

        ListNode* pre=NULL; ListNode* post=NULL;
        while (head!=NULL){
            post=head->next;
            head->next=pre;
            pre=head;
            head=post;
        }
        head=pre;

    }

public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* fast=head; ListNode* slow=head;
        while (fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* back=slow;
        rev(back);
        while (head!=slow && back!=NULL){
            if (head->val != back->val) return false;
            head=head->next;
            back=back->next;
        }
        return true;

    }
};