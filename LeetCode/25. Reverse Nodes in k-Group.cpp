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

    ListNode* krev(ListNode* head, int k, int len){

        if (k==1 || len<k || head==NULL) return head;

        int i=0;
        ListNode* pre=NULL; ListNode* curr=head; ListNode* post=NULL;
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

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int len=length(head);
        return krev(head, k, len);

    }
};