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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        rev(l1); rev(l2);

        ListNode* dummy = new ListNode(0);
        ListNode* ans=dummy; int carry=0;
        while (l1 and l2){
            int digit=(carry + (l1->val) + (l2->val))%10;
            carry=(carry + (l1->val) + (l2->val))/10;
            ListNode* temp= new ListNode(digit);
            dummy->next=temp;
            dummy=dummy->next;
            l1=l1->next; l2=l2->next;
        }
        while (l1){
            int digit=(carry + (l1->val))%10;
            carry=(carry + (l1->val))/10;
            ListNode* temp= new ListNode(digit);
            dummy->next=temp;
            dummy=dummy->next;
            l1=l1->next;
        }
        while (l2){
            int digit=(carry + (l2->val))%10;
            carry=(carry + (l2->val))/10;
            ListNode* temp= new ListNode(digit);
            dummy->next=temp;
            dummy=dummy->next;
            l2=l2->next;
        }
        if (carry > 0){
            ListNode* temp= new ListNode(carry);
            dummy->next=temp;
        }
        ans=ans->next;
        rev(ans);
        return ans;

    }
};