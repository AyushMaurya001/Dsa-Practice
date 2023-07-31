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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1==NULL && l2==NULL) return l1;
        ListNode* tail = new ListNode(200);
        ListNode* ans = tail;
        while (l1!=NULL && l2!=NULL){
            if (l1->val <= l2->val){
                if (tail->val==200){
                    tail->val = l1->val;
                    l1=l1->next;
                } else {
                    ListNode* temp = new ListNode();
                    temp->val = l1->val;
                    l1=l1->next;
                    tail->next=temp;
                    tail=temp;
                }
            } else {
                if (tail->val==200){
                    tail->val = l2->val;
                    l2=l2->next;
                } else {
                    ListNode* temp = new ListNode();
                    temp->val = l2->val;
                    l2=l2->next;
                    tail->next=temp;
                    tail=temp;
                }
            }
        }
        while (l1!=NULL){
            if (tail->val==200){
                tail->val = l1->val;
                l1=l1->next;
            } else {
                ListNode* temp = new ListNode();
                temp->val = l1->val;
                l1=l1->next;
                tail->next=temp;
                tail=temp;
            }
        }
        while (l2!=NULL){
            if (tail->val==200){
                tail->val = l2->val;
                l2=l2->next;
            } else {
                ListNode* temp = new ListNode();
                temp->val = l2->val;
                l2=l2->next;
                tail->next=temp;
                tail=temp;
            }
        }
        return ans;

    }
};