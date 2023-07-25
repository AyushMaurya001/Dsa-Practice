link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1

class Solution{
    
    void per(string str, vector<string>& ans, int i){
        
        if (i>=str.size()){
            ans.push_back(str);
            return;
        }
        for (int j=i; j<str.size(); j++){
            swap(str[j], str[i]);
            per(str, ans, i+1);
            swap(str[j], str[i]);
        }
        
    }
    
    public:
    
    vector<string> permutation(string str){
        
        vector<string> ans;
        per(str, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
    
    
    
    
    
};