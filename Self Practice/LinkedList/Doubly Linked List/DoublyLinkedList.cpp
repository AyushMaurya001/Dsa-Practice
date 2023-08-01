#include <iostream>
using namespace std;

class node{

    public:
    int val; node* pre; node* nxt;

    node(int n){
        val=n; pre=NULL; nxt=NULL;
    }

};

int main(){
    
    node* head = new node(100);
    cout << head->val << endl;
    
    return 0;
}