// link: https://practice.geeksforgeeks.org/problems/valid-expression1025/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    
    stack<char> stk;
    for (auto i: s){
        if (i=='(' || i=='{' || i=='[') stk.push(i);
        else if (stk.empty()) return false;
        else {
            if (i==')' && stk.top()=='(') stk.pop();
            else if (i=='}' && stk.top()=='{') stk.pop();
            else if (i==']' && stk.top()=='[') stk.pop();
            else return false;
        }
    }
    return stk.empty();
    
}