class CustomStack {

private:
    int maxSize;
    stack<int> stk;

public:
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if (stk.size() == maxSize){
            return;
        }
        stk.push(x);
    }
    
    int pop() {
        if (stk.empty()) return -1;
        int temp=stk.top(); stk.pop(); return temp;
    }
    
    void increment(int k, int val) {
        stack<int> temp;
        while (!stk.empty()){
            temp.push(stk.top()); stk.pop();
        }
        int i=0;
        while (!temp.empty() && i<k){
            stk.push(temp.top()+val); temp.pop(); i++;
        }
        while (!temp.empty()){
            stk.push(temp.top()); temp.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */