// link: https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?leftPanelTab=0

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    
    LinkedListNode<int>* pre=NULL;
    while (head!=NULL){
        LinkedListNode<int>* post=head->next;
        head->next=pre;
        pre=head;
        head=post;
    }
    return pre;

}