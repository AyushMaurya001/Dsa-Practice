class Solution {
public:
    bool isValid(string str) {
        
        stack<char> stk;
        for (int i=0; i<str.size(); i++){
            if (str[i]=='(' || str[i]=='{' || str[i]=='['){
                stk.push(str[i]);
            } else {
                if (stk.size()==0) return false;
                if (str[i]==')' && stk.top()=='('){
                    stk.pop();
                } else if (str[i]=='}' && stk.top()=='{'){
                    stk.pop();
                } else if (str[i]==']' && stk.top()=='['){
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        if (stk.size()==0) return true;
        return false;

    }
};