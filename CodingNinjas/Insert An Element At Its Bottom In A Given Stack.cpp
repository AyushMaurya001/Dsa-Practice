// link: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int> myStack, int x) 
{
    
    stack<int> ans;
    while (!myStack.empty()){
        ans.push(myStack.top()); myStack.pop();
    }
    ans.push(x);
    while (!ans.empty()){
        myStack.push(ans.top()); ans.pop();
    }
    return myStack;

}
