// link: https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?leftPanelTab=0

#include <stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    
    stack<int> stk;
    stk.push(-1);
    for (int i=n-1; i>=0; i--){
        if (stk.top() < arr[i]){
            int temp=arr[i]; arr[i]=stk.top(); stk.push(temp);
        } else {
            while (stk.top() >= arr[i]) stk.pop();
            int temp=arr[i]; arr[i]=stk.top(); stk.push(temp);
        }
    }
    return arr;
    
}