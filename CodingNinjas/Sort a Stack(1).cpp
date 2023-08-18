// link: https://www.codingninjas.com/studio/problems/sort-a-stack_537?leftPanelTab=0

#include<bits/stdc++.h>
#include <stack>
using namespace std;

void insert(int n, stack<int> &s){

	if (s.size()==0){
		s.push(n); return;
	}
	if (n<=s.top()){
		s.push(n); return;
	}
	int temp=s.top(); s.pop();
	insert(n, s);
	insert(temp, s);

}

void sortStack(stack<int> &s){
	
	if (s.size()==0 || s.size()==1) return;
	int temp=s.top(); s.pop();
	sortStack(s);
	insert(temp, s);

}