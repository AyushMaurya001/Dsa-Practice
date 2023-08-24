// link: https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?leftPanelTab=0

#include<stack>

class SpecialStack {

    private:
    stack<int> stk;
    int min=INT_MAX;

    public:
        
    void push(int data) {
        
        if (stk.empty()){
            stk.push(data);
            min=data;
        }
        else {
            if (data<min){
                int val=2*data-min;
                stk.push(val);
                min=data;
            } else {
                stk.push(data);
            }
        }
        
    }

    void pop() {
        
        if (stk.empty()) return;
        if (stk.top()<min) min=2*min-stk.top();
        stk.pop();
        
    }

    int top() {
        
        if (stk.empty()) return -1;
        if (stk.top()<min) return min;
        return stk.top();
        
    }

    int getMin() {
        
        if (stk.empty()) return -1;
        return min;

    }  
};#include<stack>

class SpecialStack {

    private:
    stack<int> stk;
    int min=INT_MAX;

    public:
        
    void push(int data) {
        
        if (stk.empty()){
            stk.push(data);
            min=data;
        }
        else {
            if (data<min){
                int val=2*data-min;
                stk.push(val);
                min=data;
            } else {
                stk.push(data);
            }
        }
        
    }

    void pop() {
        
        if (stk.empty()) return;
        if (stk.top()<min) min=2*min-stk.top();
        stk.pop();
        
    }

    int top() {
        
        if (stk.empty()) return -1;
        if (stk.top()<min) return min;
        return stk.top();
        
    }

    int getMin() {
        
        if (stk.empty()) return -1;
        return min;

    }  
};