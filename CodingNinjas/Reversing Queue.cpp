// link: https://www.codingninjas.com/studio/problems/reversing-queue_1170046?leftPanelTab=0

#include <bits/stdc++.h> 
void reverse(queue<int>& q) {
    
    if (q.size()==1 || q.size()==0) return;
    stack<int> ans;
    while (!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    while (!ans.empty()){
        q.push(ans.top());
        ans.pop();
    }
    
}