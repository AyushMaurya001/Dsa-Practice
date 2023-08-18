// link: https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0

#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> stk;
    for (auto i: s){
        if (i=='(' || i=='+' || i=='-' || i=='*' || i=='/') stk.push(i);
        else if (i==')'){
            if (stk.top()=='(') return true;
            while (!stk.empty()){
                if (stk.top()=='+' || stk.top()=='-' || stk.top()=='*' || stk.top()=='/') stk.pop();
                else if (stk.top()=='('){
                    stk.pop(); break;
                }
            }
        }
    }
    return false;

}
