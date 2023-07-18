class Solution {
public:
    int prefixCount(vector<string>& str, string t) {
        
        int cnt=0;
        for (int i=0; i<str.size(); i++){
            if (t.size()>str[i].size()) continue;
            string temp=str[i];
            for (int j=0; j<temp.size(); j++){
                if (temp[j]==t[j] && j==t.size()-1){
                    cnt++;
                }
                if (temp[j]!=t[j]) break;
            }
        }
        return cnt;

    }
};