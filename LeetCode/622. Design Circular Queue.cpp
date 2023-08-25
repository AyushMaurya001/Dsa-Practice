class MyCircularQueue {

private:
    int *arr;
    int f=0, r=0, size=0, max=0;

public:
    MyCircularQueue(int k) {
        arr= new int[k];
        max=k;
    }
    
    bool enQueue(int value) {
        if (size==max) return false;
        arr[r++]=value; size++;
        if (r==max) r=0;
        return true;
    }
    
    bool deQueue() {
        if (size==0) return false;
        f++; size--;
        if (f==max) f=0;
        return true;
    }
    
    int Front() {
        if (size==0) return -1;
        return arr[f];
    }
    
    int Rear() {
        if (size==0) return -1;
        if (r!=0) return arr[r-1];
        return arr[max-1];
    }
    
    bool isEmpty() {
        if (size==0) return true;
        return false;
    }
    
    bool isFull() {
        if (size==max) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */