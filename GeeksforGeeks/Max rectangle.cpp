// link: https://practice.geeksforgeeks.org/problems/max-rectangle/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    
  private:
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
    	int maxArea=0;
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
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        vector<int> row(m);
    	for (int i=0; i<m; i++) row[i]=M[0][i];
    	int maxArea=area(row);
    	for (int i=1; i<n; i++){
    		vector<int> temp(m);
    		for (int j=0; j<m; j++) temp[j]=M[i][j];
    		row=add(row, temp);
    		int a=area(row);
    		if (a>maxArea) maxArea=a;
    	}
    	return maxArea;
        
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends