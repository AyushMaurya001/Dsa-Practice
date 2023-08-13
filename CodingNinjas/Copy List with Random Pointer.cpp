// link: https://www.codingninjas.com/studio/problems/clone-linked-list-with-random-pointer_873376?leftPanelTab=0

#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    
    if (head==NULL) return NULL;

    LinkedListNode<int>* curr1=head;
    LinkedListNode<int>* copy= new LinkedListNode<int>(curr1->data); curr1=curr1->next;
    LinkedListNode<int>* curr2=copy;
    while (curr1!=NULL){
        LinkedListNode<int>* temp= new LinkedListNode<int>(curr1->data);
        curr2->next=temp; curr2=curr2->next;
        curr1=curr1->next;
    }

    unordered_map<LinkedListNode<int>*, LinkedListNode<int>*> map;
    curr1=head; curr2=copy;
    while (curr1!=NULL){
        map[curr1]=curr2;
        curr1=curr1->next; curr2=curr2->next;
    }

    curr1=head; curr2=copy;
    while (curr1!=NULL){
        if (curr1->random==NULL) curr2->random=NULL;
        else curr2->random=map[curr1->random];
        curr1=curr1->next; curr2=curr2->next;
    }

    return copy;

}
