/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if (head==NULL) return NULL;
        Node* curr=head;
        Node* copy= new Node(curr->val); curr=curr->next;
        Node* curr2=copy;
        while (curr!=NULL){
            Node* temp= new Node(curr->val);
            curr2->next=temp; curr2=curr2->next;
            curr=curr->next;
        }

        unordered_map<Node*, Node*> map;
        curr=head; curr2=copy;
        while (curr!=NULL){
            map[curr]=curr2;
            curr=curr->next; curr2=curr2->next;
        }

        curr=head; curr2=copy;
        while (curr!=NULL){
            if (curr->random==NULL) curr2->random=NULL;
            else curr2->random=map[curr->random];
            curr=curr->next; curr2=curr2->next;
        }

        return copy;

    }
};