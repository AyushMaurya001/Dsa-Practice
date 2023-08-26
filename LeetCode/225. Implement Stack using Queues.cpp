class MyStack {

private:
    queue<int> q;

public:
    MyStack() {

    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int n=q.size()-1;
        for (int i=0; i<n; i++){
            q.push(q.front()); q.pop();
        }
        int temp=q.front(); q.pop();
        return temp;
    }
    
    int top() {
        int n=q.size()-1;
        for (int i=0; i<n; i++){
            q.push(q.front()); q.pop();
        }
        int temp=q.front(); q.push(q.front()); q.pop();
        return temp;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */