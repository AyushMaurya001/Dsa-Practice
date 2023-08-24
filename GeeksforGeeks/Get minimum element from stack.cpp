// link: https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int min=INT_MAX;
    stack<int> s;
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if (s.empty()) return -1;
           return min;
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if (s.empty()) return -1;
           if (s.top()<min){
               int temp=min;
               min=2*temp-s.top();
               s.pop();
               return temp;
           } else {
               int temp=s.top();
               s.pop(); return temp;
           }
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           if (s.empty()){
                s.push(x);
                min=x;
           }
           else {
               if (x<min){
                   int data=2*x-min;
                   s.push(data);
                   min=x;
               } else s.push(x);
           }
           
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends