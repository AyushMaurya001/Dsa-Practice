class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        string temp;
        for (int i=0; i<s.size(); i++){
            temp.push_back(s[i]);
            if (s.size()%temp.size()==0){
                string t=temp;
                int i=0, k=s.size()/temp.size();
                while (i<k){
                    i++;
                    t+=temp;
                    if (t==s) return true;
                }
            }
        }
        return false;

    }
};