// link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution
{
    
    void per(string str, vector<string>& ans, int i){
        
        if (i>=str.size()){
            ans.push_back(str);
            return;
        }
        for (int j=i; j<str.size(); j++){
            swap(str[i], str[j]);
            per(str, ans, i+1);
            swap(str[i], str[j]);
        }
        
    }
    
	public:
		vector<string>find_permutation(string str){
		    
		    vector<string> ans;
		    vector<string>::iterator i;
		    per(str, ans, 0);
		    sort(ans.begin(), ans.end());
		    for (i=ans.begin(); i!=ans.end()-1; i++){
		        if (*i==*(i+1)){
		            ans.erase(i+1); i--;
		        }
		    }
		    return ans;
		    
		}
};