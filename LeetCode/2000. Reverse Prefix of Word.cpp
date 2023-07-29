class Solution {

private:
    void rev(string& str, int s, int e){

        while (s<e){
            swap(str[s], str[e]);
            s++; e--;
        }

    }

public:
    string reversePrefix(string str, char ch) {
        
        int s=0, e=-1;
        for (int i=0; i<str.size(); i++){
            if (str[i]==ch){
                e=i; break;
            }
        }
        if (e==-1 || e==0) return str;
        rev(str, s, e);
        return str;

    }
};