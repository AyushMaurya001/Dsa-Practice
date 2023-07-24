// link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

class Solution {
public:

    void solve(string str, vector<string>& ans, string temp, string map[], int i){

        if (i>=str.size()){
            ans.push_back(temp);
            return;
        }
        int num=str[i]-'0';
        string temp1=map[num];
        for (int j=0; j<temp1.size(); j++){
            temp.push_back(temp1[j]);
            solve(str, ans, temp, map, i+1);
            temp.pop_back();
        }

    }

    vector<string> letterCombinations(string str) {

        if (str.size()==0) return {};
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string temp;
        solve(str, ans, temp, map, 0);
        return ans;

    }
};