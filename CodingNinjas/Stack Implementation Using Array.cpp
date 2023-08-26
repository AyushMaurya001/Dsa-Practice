// link: https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?leftPanelTab=0

// Stack class.
class Stack {
    
private:
    int *arr;
    int i=-1, size=0, max=0;

public:
    
    Stack(int capacity) {
        arr= new int[capacity];
        max=capacity;
    }

    void push(int num) {
        if (size==max) return;
        arr[++i]=num; size++;
    }

    int pop() {
        if (size==0) return -1;
        size--;
        return arr[i--];
    }
    
    int top() {
        if (size==0) return -1;
        return arr[i];
    }
    
    int isEmpty() {
        if (size==0) return true;
        return false;
    }
    
    int isFull() {
        if (size==max) return true;
        return false;
    }
    
};
