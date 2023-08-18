// link: https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        
        stack<char> stk;
        for (auto i: s){
            if (i=='(' || i=='+' || i=='-' || i=='*' || i=='/') stk.push(i);
            else if (i==')'){
                if (stk.top()=='(') return 1;
                else {
                    while (!stk.empty()){
                        if (stk.top()=='+' || stk.top()=='-' || stk.top()=='*' || stk.top()=='/') stk.pop();
                        else if (stk.top()=='('){
                            stk.pop(); break;
                        }
                    }
                }
            }
        }
        return 0;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends