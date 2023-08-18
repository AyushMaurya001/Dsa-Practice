// link: https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0

#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  
  stack<char> stk;
  for (auto i: str){
    if (i=='{') stk.push(i);
    else {
      if (stk.empty()) stk.push(i);
      else if (stk.top()=='{'){
        stk.pop();
      } else stk.push(i);
    }
  }
  if (stk.size()==0) return 0;
  else if (stk.size()%2==1) return -1;
  vector<char> temp;
  while (!stk.empty()){
    temp.push_back(stk.top()); stk.pop();
  }
  int i=0, j=1, n=temp.size(), ans=0;
  while (j<n){
    if (temp[i]!=temp[j]) ans+=2;
    else ans++;
    i+=2; j+=2;
  }
  return ans;

}