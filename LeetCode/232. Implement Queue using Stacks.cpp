class MyQueue {

private:
    stack<int> stk;
    int first=0;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if (stk.empty()) first=x;
        stk.push(x);
    }
    
    int pop() {
        int n=stk.size()-1;
        stack<int> temp;
        for (int i=0; i<n; i++){
            temp.push(stk.top()); stk.pop();
        }
        int a=stk.top(); stk.pop(); int i=0;
        while (!temp.empty()){
            if (i==0){
                first=temp.top(); i++;
            }
            stk.push(temp.top()); temp.pop();
        }
        return a;
    }
    
    int peek() {
        return first;
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */