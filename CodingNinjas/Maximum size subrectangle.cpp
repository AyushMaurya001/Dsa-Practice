// link: https://www.codingninjas.com/studio/problems/maximum-size-subrectangle_981319?leftPanelTab=0

#include <bits/stdc++.h> 

vector<int> left(vector<int> arr){
	stack<int> stk; stk.push(-1);
	vector<int> ans(arr.size());
	for (int i=0; i<arr.size(); i++){
		while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
		ans[i]=stk.top(); stk.push(i);
	}
	return ans;
}

vector<int> right(vector<int> arr){
	stack<int> stk; stk.push(-1);
	vector<int> ans(arr.size());
	for (int i=arr.size()-1; i>=0; i--){
		while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
		ans[i]=stk.top(); stk.push(i);
	}
	return ans;
}

int area(vector<int> arr){
	vector<int> l=left(arr); vector<int> r=right(arr);
	int maxArea=-1;
	for (int i=0; i<arr.size(); i++){
		if (r[i]==-1) r[i]=arr.size();
		int area=(arr[i])*(r[i]-l[i]-1);
		if (area > maxArea) maxArea=area;
	}
	return maxArea;
}

vector<int> add(vector<int> initial, vector<int> next){
	for (int i=0; i<next.size(); i++){
		if (next[i]==1) initial[i]++;
		else initial[i]=0;
	}
	return initial;
}

int maximalArea(vector<vector<int>>& mat, int N, int M)
{
	vector<int> initial=mat[0];
	int maxArea=area(initial);
	for (int i=1; i<N; i++){
		initial=add(initial, mat[i]);
		int temp=area(initial);
		if (temp > maxArea) maxArea=temp;
	}
	return maxArea;
	
}
