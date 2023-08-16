// link: https://www.codingninjas.com/studio/problems/two-stacks_983634?leftPanelTab=0

#include <bits/stdc++.h> 
class TwoStack {

private:
    int *arr; int size, t1, t2;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        
        size=s;
        arr= new int[size];
        t1=-1; t2=s;
        
    }
    
    // Push in stack 1.
    void push1(int num) {
        int left=t2-t1-1;
        if (left <= 0) return;
        t1++; arr[t1]=num;
    }

    // Push in stack 2.
    void push2(int num) {
        int left=t2-t1-1;
        if (left <= 0) return;
        t2--; arr[t2]=num;
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if (t1 == -1) return -1;
        return arr[t1--];
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if (t2 == size) return -1;
        return arr[t2++];
    }
};
