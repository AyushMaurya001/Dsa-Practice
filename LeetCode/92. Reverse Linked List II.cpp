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
    ListNode* rev(ListNode* head, ListNode* pre, int k){

        int i=0;
        ListNode* curr=head; ListNode* post=NULL;
        while (i<k && curr!=NULL){
            i++;
            post=curr->next;
            curr->next=pre;
            pre=curr;
            curr=post;
        }
        return pre;

    }

    ListNode* atk(ListNode* head, int k){

        int cnt=0;
        ListNode* curr=head;
        while (curr!=NULL && cnt<k){
            cnt++;
            curr=curr->next;
        }
        return curr;

    }

public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if (left==right) return head;
        int cnt=0, k=right-left+1;
        ListNode* curr=head;
        ListNode* pre=NULL;
        while (curr!=NULL){
            cnt++;
            if (cnt==left){
                ListNode* post=atk(curr, k);
                if (pre!=NULL) pre->next=rev(curr, post, k);
                else head=rev(curr, post, k);
                break;
            }
            pre=curr;
            curr=curr->next;
        }
        return head;

    }
};