// link: https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0

#include <bits/stdc++.h> 
class Queue {

private:
    int *arr= new int[5001];
    int size=0, s=0, e=1;

public:
    Queue() {

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if (size==0) return true;
        return false;
    }

    void enqueue(int data) {
        arr[e-1]=data; e++; size++;
    }

    int dequeue() {
        if (size==0) return -1;
        int temp=arr[s]; s++; size--;
        return temp;
    }

    int front() {
        if (size==0) return -1;
        return arr[s];
    }
};