class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char> stk;
        for (auto i: s){
            if (i=='(') stk.push(i);
            else {
                if (stk.empty()) stk.push(i);
                else if (stk.top()=='(') stk.pop();
                else stk.push(i);
            }
        }
        return stk.size();

    }
};