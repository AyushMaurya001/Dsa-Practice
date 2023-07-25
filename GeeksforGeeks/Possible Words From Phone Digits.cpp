// link: https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1

class Solution
{
    
    void combo(int *arr, int n, string temp, vector<string>& ans, int i, string m[]){
        
        if (i>=n){
            ans.push_back(temp);
            return;
        }
        int num=arr[i]-2;
        string a=m[num];
        for (int j=0; j<a.size(); j++){
            temp.push_back(a[j]);
            combo(arr, n, temp, ans, i+1, m);
            temp.pop_back();
        }
        
    }
    
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int n){
        
        string temp;
        vector<string> ans;
        string m[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combo(a, n, temp, ans, 0, m);
        return ans;
        
    }
};