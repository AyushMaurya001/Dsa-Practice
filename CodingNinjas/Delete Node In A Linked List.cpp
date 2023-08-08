// link: https://www.codingninjas.com/studio/problems/delete-node-in-a-linked-list_1105578?leftPanelTab=0

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

void deleteNode(LinkedListNode<int> * node) {
    
    node->data=node->next->data;

    node->next=node->next->next;
    
}