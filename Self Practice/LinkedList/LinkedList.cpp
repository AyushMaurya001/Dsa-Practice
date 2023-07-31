#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(){
        this -> data = 0;
        this -> next = NULL;
    }
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    public:
    void print(){
        cout << "Data = " << data << endl;
        cout << "Next Address = " << next << endl;
    }

};

int main(){

    node* n1 = new node();
    node* n2 = new node(9);
    n1->print();
    n2->print();

    return 0;
}