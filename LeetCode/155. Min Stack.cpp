class MinStack {

private:
    stack<int> stk;
    stack<int> min;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        if (stk.empty()){
            stk.push(val);
            min.push(val);
        } else {
            if (val<min.top()){
                stk.push(val);
                min.push(val);
            } else {
                stk.push(val);
                min.push(min.top());
            }
        }

    }
    
    void pop() {
        
        stk.pop(); min.pop();

    }
    
    int top() {
        
        return stk.top();

    }
    
    int getMin() {
        
        return min.top();

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */