class Solution {
public:
    int titleToNumber(string str) {
        
        unordered_map<char, int> m;
        m['A']=1; m['B']=2; m['C']=3; m['D']=4; m['E']=5; m['F']=6; m['G']=7; m['H']=8; m['I']=9; m['J']=10; m['K']=11; m['L']=12; m['M']=13; m['N']=14; m['O']=15; m['P']=16; m['Q']=17; m['R']=18; m['S']=19; m['T']=20; m['U']=21; m['V']=22; m['W']=23; m['X']=24; m['Y']=25; m['Z']=26;
        int i=str.size()-1, j=0, ans=0;
        while (i>=0){
            int temp=pow(26, j);
            ans+=temp*(m[str[i]]); i--; j++;
        }
        return ans;

    }
};