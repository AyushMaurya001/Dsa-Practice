// link: https://www.codingninjas.com/studio/problems/largest-rectangle-in-a-histogram_1058184?leftPanelTab=0

#include <stack>

vector<int> lefty(vector<int> arr){

  stack<int> stk;
  stk.push(-1);
  vector<int> ans(arr.size());
  for (int i=0; i<arr.size(); i++){
    while (stk.top() != -1 && arr[stk.top()] >= arr[i]) stk.pop();
    ans[i]=stk.top(); stk.push(i);
  }
  return ans;
  
}

vector<int> righty(vector<int> arr){

  stack<int> stk;
  stk.push(-1);
  vector<int> ans(arr.size());
  for (int i=arr.size()-1; i>=0; i--){
    while (stk.top() != -1 && arr[stk.top()] >= arr[i]) stk.pop();
    ans[i]=stk.top(); stk.push(i);
  }
  return ans;
  
}

int largestRectangle(vector < int > & heights) {
   
  vector<int> left=lefty(heights);
  vector<int> right=righty(heights);
  int maxArea=-1;
  for (int i=0; i<heights.size(); i++){
    if (right[i]==-1) right[i]=heights.size();
    int l=heights[i], b=right[i]-left[i]-1;
    int area=l*b;
    if (area > maxArea) maxArea=area;
  }
  return maxArea;
   
}