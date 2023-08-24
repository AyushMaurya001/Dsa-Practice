// link: https://www.codingninjas.com/studio/problems/circular-queue_1170058?leftPanelTab=0

#include <bits/stdc++.h> 
class CircularQueue{

    private:
    int *arr;
    int f=0, r=0, size=0, max=0;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        arr= new int[n];
        max=n;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if (size==max) return false;
        arr[r]=value; r++; size++;
        if (r==max) r=0;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if (size==0) return -1;
        int temp=arr[f]; f++; size--;
        if (f==max) f=0;
        return temp;
    }
};