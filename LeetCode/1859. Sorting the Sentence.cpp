class Solution {
public:
    string sortSentence(string str) {
        
        int space=0;
        for (int i=0; i<str.size(); i++){
            if (str[i]==' ') space++;
        }
        string words[space+1], temp;
        for (int i=0; i<str.size(); i++){
            if (str[i]==' ') continue;
            else if (str[i]>='1' && str[i]<='9'){
                int index=str[i]-'1';
                words[index]=temp;
                temp.clear();
                continue;
            }
            temp.push_back(str[i]);
        }
        str.clear();
        for (int i=0; i<space+1; i++){
            string temp=words[i];
            for (int j=0; j<temp.size(); j++){
                str.push_back(temp[j]);
            }
            if (i!=space){
                str.push_back(' ');
            }
        }
        return str;

    }
};