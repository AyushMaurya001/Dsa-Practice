// link: https://www.codingninjas.com/studio/problems/largest-rectangle-in-matrix_873265?leftPanelTab=0

#include <bits/stdc++.h> 
#include <stack>

vector<int> left(vector<int> arr){
	stack<int> stk; stk.push(-1); vector<int> ans(arr.size());
	for (int i=0; i<arr.size(); i++){
		while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
		ans[i]=stk.top(); stk.push(i);
	}
	return ans;
}

vector<int> right(vector<int> arr){
	stack<int> stk; stk.push(-1); vector<int> ans(arr.size());
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
		if (area>maxArea) maxArea=area;
	}
	return maxArea;
}

vector<int> add(vector<int> initial, vector<int> arr){
	for (int i=0; i<arr.size(); i++){
		if (arr[i]==1) initial[i]++;
		else initial[i]=0;
	}
	return initial;
}

int getLargestRectangle(int **arr, int n, int m) {
	
	vector<int> row(m);
	for (int i=0; i<m; i++) row[i]=arr[0][i];
	int maxArea=area(row);
	for (int i=1; i<n; i++){
		vector<int> temp(m);
		for (int j=0; j<m; j++) temp[j]=arr[i][j];
		row=add(row, temp);
		int a=area(row);
		if (a>maxArea) maxArea=a;
	}
	return maxArea;

}