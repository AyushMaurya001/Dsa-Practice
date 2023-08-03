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
    int length(ListNode* head){

        int cnt=0;
        while (head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;

    }

public:
    ListNode* middleNode(ListNode* head) {
        
        int n=length(head);
        if (n==1) return head;
        int middle=(n/2)+1;
        while (middle>1){
            middle--;
            head=head->next;
        }
        return head;
        
    }
};