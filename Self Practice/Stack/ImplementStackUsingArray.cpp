# include <iostream>
using namespace std;

class stack{

    private:
    int *arr; int size; int top;

    public:
    stack(int size){
        this -> size = size;
        arr= new int[size];
        top=-1;
    }

    void push(int val){
        if (top+1 >= size){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
        if (top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if (top >= 0 && top < size){
            return arr[top];
        }
        cout << "Stack is Empty" << endl;
        return -1;
    }

    bool isEmpty(){
        if (top == -1) return true;
        else return false;
    }

};

int main(){
    
    stack st(4);
    st.push(4);
    st.push(7);
    st.push(14);
    st.pop();
    cout << st.peek() << endl;
    st.push(4);
    st.push(7);
    st.push(14);
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    
    return 0;
}