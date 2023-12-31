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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        vector<int> num; int carry=0;
        while (l1 and l2){
            int digit=(carry+(l1->val)+(l2->val))%10;
            carry=(carry+(l1->val)+(l2->val))/10;
            num.push_back(digit);
            l1=l1->next; l2=l2->next;
        }
        while (l1){
            int digit=(carry+(l1->val))%10;
            carry=(carry+(l1->val))/10;
            num.push_back(digit);
            l1=l1->next;
        }
        while (l2){
            int digit=(carry+(l2->val))%10;
            carry=(carry+(l2->val))/10;
            num.push_back(digit);
            l2=l2->next;
        }
        if (carry>0) num.push_back(carry);
        ListNode* dummy= new ListNode(0);
        ListNode* ans=dummy;
        int i=0, n=num.size();
        while (i<n){
            ListNode* temp= new ListNode(num[i++]);
            dummy->next=temp;
            dummy=dummy->next;
        }
        return ans->next;

    }
};