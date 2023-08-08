// link: https://www.codingninjas.com/studio/problems/add-two-numbers-as-linked-lists_1170520?leftPanelTab=0

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *n1, Node *n2){
    
    vector<int> num; int carry=0;
    while (n1 and n2){
        int digit=(carry+(n1->data)+(n2->data))%10;
        carry=(carry+(n1->data)+(n2->data))/10;
        num.push_back(digit);
        n1=n1->next; n2=n2->next;
    }
    while (n1){
        int digit=(carry+(n1->data))%10;
        carry=(carry+(n1->data))/10;
        num.push_back(digit);
        n1=n1->next;
    }
    while (n2){
        int digit=(carry+(n2->data))%10;
        carry=(carry+(n2->data))/10;
        num.push_back(digit);
        n2=n2->next;
    }
    if (carry>0) num.push_back(carry);
    
    int i=0, n=num.size();
    Node* dummy = new Node(0);
    Node* ans=dummy;
    while (i<n){
        Node* temp=new Node(num[i++]);
        dummy->next=temp;
        dummy=dummy->next;
    }
    return ans->next;
    
}
