// link: https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246

#include <bits/stdc++.h> 
void deleteMiddle(stack<int>& Stack, int N){
	
   stack<int> temp;
   int i=0, mid;
   if (Stack.size()%2==0) mid=(Stack.size()-1)/2;
   else mid=Stack.size()/2;
   while (!Stack.empty()){
      if (i!=mid){
         temp.push(Stack.top()); Stack.pop(); i++;
      } else {
         Stack.pop(); i++;
      }
   }
   while (!temp.empty()){
      Stack.push(temp.top()); temp.pop();
   }
   
}