// link: https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string str){
	    
	    for (int i=0; i<str.size()-1; i++){
	        for (int j=i+1; j<str.size(); j++){
	            if (str[i]==str[j]){
	                str.erase(str.begin()+j); j--;
	            }
	        }
	    }
	    return str;
	    
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends