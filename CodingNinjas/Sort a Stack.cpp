// link: https://www.codingninjas.com/studio/problems/sort-a-stack_985275?leftPanelTab=0

#include <bits/stdc++.h> 

void insert(int n, stack<int> &stack){

	if (stack.empty()){
		stack.push(n); return;
	}
	if (n>=stack.top()){
		stack.push(n); return;
	}
	int temp=stack.top(); stack.pop();
	insert(n, stack);
	insert(temp, stack);

}

void sortStack(stack<int> &stack)
{
	if (stack.size()==1 || stack.size()==0) return;
	int temp=stack.top(); stack.pop();
	sortStack(stack);
	insert(temp, stack);
}