// link: https://www.codingninjas.com/studio/problems/the-celebrity-problem_982769?leftPanelTab=0

#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {

	// for (int i=0; i<n; i++){
	// 	bool error=0;
	// 	for (int j=0; j<n && error==0; j++){
	// 		if (knows(i,j)==1) error=1;
	// 	}
	// 	for (int j=0; j<n && error==0; j++){
	// 		if (knows(j,i)==0 && i!=j) error=1;
	// 	}
	// 	if (error==0) return i;
	// }
	// return -1;

	stack<int> stk;
	for (int i=0; i<n; i++) stk.push(i);
	while (stk.size() > 1){
		int a=stk.top(); stk.pop(); int b=stk.top(); stk.pop();
		if (knows(a,b)) stk.push(b);
		else stk.push(a);
	}
	for (int i=0; i<n; i++){
		if (knows(stk.top(),i)==1) return -1;
	}
	for (int i=0; i<n; i++){
		if (knows(i,stk.top())==0 && i!=stk.top()) return -1;
	}
	return stk.top();
	 
}