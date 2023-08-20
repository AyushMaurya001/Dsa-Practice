// link: https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    
    vector<int> lefty(vector<int> arr, int n){
        
        stack<int> stk;
        stk.push(-1);
        vector<int> ans(arr.size());
        for (int i=0; i<n; i++){
            while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
            ans[i]=stk.top(); stk.push(i);
        }
        return ans;
        
    }
    
    vector<int> righty(vector<int> arr, int n){
        
        stack<int> stk;
        stk.push(-1);
        vector<int> ans(arr.size());
        for (int i=n-1; i>=0; i--){
            while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
            ans[i]=stk.top(); stk.push(i);
        }
        return ans;
        
    }
    
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        
        vector<int> a(n);
        for (int i=0; i<n; i++) a[i]=arr[i];
        vector<int> left=lefty(a, n);
        vector<int> right=righty(a, n);
        long long ans=-1;
        for (int i=0; i<n; i++){
            if (right[i]==-1) right[i]=n;
            long long l=arr[i], b=(right[i])-(left[i]+1);
            long long area=l*b;
            if (area>ans) ans=area;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends