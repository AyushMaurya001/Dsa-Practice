// link: https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int* arr, int n){
        
        if (arr[0]==arr[n-1] || n==1) return 1;
        int unique=1, index=0;
        for (int i=0, j=1; j<n; i++, j++){
            if (arr[i]!=arr[j]){
                unique++;
                swap(arr[index++], arr[i]);
            }
        }
        swap(arr[index], arr[n-1]);
        return unique;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends