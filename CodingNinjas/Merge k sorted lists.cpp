// link: https://www.codingninjas.com/studio/problems/merge-k-sorted-lists_992772?leftPanelTab=0

/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* merge2lists(Node<int>* list1, Node<int>* list2){

    if (list1==NULL) return list2;
    if (list2==NULL) return list1;
    Node<int>* ans = new Node<int>(-2000000000);
    Node<int>* start=ans;
    while (list1!=NULL && list2!=NULL){
        if (list1->data <= list2->data){
            Node<int>* temp = new Node<int>(list1->data);
            ans->next=temp;
            ans=ans->next;
            list1=list1->next;
        } else {
            Node<int>* temp = new Node<int>(list2->data);
            ans->next=temp;
            ans=ans->next;
            list2=list2->next;
        }
    }
    while (list1!=NULL){
        Node<int>* temp = new Node<int>(list1->data);
        ans->next=temp;
        ans=ans->next;
        list1=list1->next;
    }
    while (list2!=NULL){
        Node<int>* temp = new Node<int>(list2->data);
        ans->next=temp;
        ans=ans->next;
        list2=list2->next;
    }
    return start->next;

}

Node<int>* mergeKLists(vector<Node<int>*> &listArray){
    
    if (listArray.size()==1){
        return listArray[0];
    } else if (listArray.size()==0){
        return NULL;
    }
    Node<int>* ans = new Node<int>(-2000000000);
    int i=0;
    while (i<listArray.size()){
        ans=merge2lists(listArray[i], ans);
        i++;
    }
    return ans->next;

}
