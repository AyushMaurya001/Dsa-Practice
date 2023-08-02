// link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* pre=NULL;
        while (head!=NULL){
            struct Node* post=head->next;
            head->next=pre;
            pre=head;
            head=post;
        }
        return pre;
    }
    
};