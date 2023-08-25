// link: https://www.codingninjas.com/studio/problems/reverse-the-first-k-elements-of-a-queue_1164269?leftPanelTab=0

#include <bits/stdc++.h> 
void reverse(queue<int> &q,int k)
{
    if (k==1) return;
    int n=q.size();
    stack<int> stk;
    for (int i=0; i<k; i++){
        stk.push(q.front()); q.pop();
    }
    while (!stk.empty()){
        q.push(stk.top()); stk.pop();
    }
    n=n-k;
    for (int i=0; i<n; i++){
        q.push(q.front()); q.pop();
    }
}