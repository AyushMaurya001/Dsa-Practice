// link: https://www.codingninjas.com/studio/problems/deque_1170059?leftPanelTab=0

#include <bits/stdc++.h> 
class Deque
{
private:
    int *arr;
    int f=-1, r=-1, size=0, max=0;
    
public:
    // Initialize your data structure.
    Deque(int n)
    {
        arr= new int[n];
        max=n; f=0; r=n-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if (size==max) return false;
        arr[f]=x; f++; size++;
        if (f>=max) f=0;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if (size==max) return false;
        arr[r]=x; r--; size++;
        if (r<0) r=max-1;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (size==0) return -1;
        f--; size--;
        if (f<0){
            f=max-1;
        }
        return arr[f];
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if (size==0) return -1;
        r++; size--;
        if (r>=max){
            r=0;
        }
        return arr[r];
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (size==0) return -1;
        int index=f-1;
        if (index<0) return arr[max-1];
        return arr[index];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (size==0) return -1;
        int index=r+1;
        if (index>=max) return arr[0];
        return arr[index];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (size==0) return true;
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if (size==max) return true;
        return false;
    }
};