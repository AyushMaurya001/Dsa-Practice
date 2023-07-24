// link: https://practice.geeksforgeeks.org/problems/subsets-1613027340/1

class Solution
{   
    
    void subset(vector<int> arr, vector<int> temp, vector<vector<int>>& ans, int i){
        
        if (i>=arr.size()){
            ans.push_back(temp);
            return;
        }
        subset(arr, temp, ans, i+1);
        temp.push_back(arr[i]);
        subset(arr, temp, ans, i+1);
        
    }
    
    public:
    vector<vector<int>> subsets(vector<int>& A){
        
        vector<int> temp;
        vector<vector<int>> ans;
        subset(A, temp, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};