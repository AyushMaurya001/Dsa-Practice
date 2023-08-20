// link: https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        
        stack<int> stk;
        stk.push(-1);
        for (int i=0; i<n; i++){
            while (stk.top() >= arr[i]) stk.pop();
            int temp=arr[i]; arr[i]=stk.top(); stk.push(temp);
        }
        vector<int> ans(n);
        for (int i=0; i<n; i++){
            ans[i]=arr[i];
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends