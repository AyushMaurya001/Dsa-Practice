// link: https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254?leftPanelTab=0

#include <algorithm>
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

vector<string> generatePermutations(string &str){
    
    vector<string> ans;
    per(str, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;

}