// link: https://www.codingninjas.com/studio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTab=0

#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    
    int n=q.size()/2;
    queue<int> temp;
    for (int i=0; i<n; i++){
        temp.push(q.front()); q.pop();
    }
    while (!temp.empty()){
        q.push(temp.front()); temp.pop();
        q.push(q.front()); q.pop();
    }
    
}