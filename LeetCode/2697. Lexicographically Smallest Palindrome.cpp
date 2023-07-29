class Solution {
public:
    string makeSmallestPalindrome(string str) {
        
        int s=0, e=str.size()-1;
        while (s<e){
            if (str[s]!=str[e]){
                if (str[s]<str[e]) str[e]=str[s];
                else str[s]=str[e];
            }
            s++; e--;
        }
        return str;

    }
};