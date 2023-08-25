// link: https://www.codingninjas.com/studio/problems/reversing-a-queue_982934?leftPanelTab=0

#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> stk;
    while (!q.empty()){
        stk.push(q.front());
        q.pop();
    }
    while (!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }
    return q;
}
