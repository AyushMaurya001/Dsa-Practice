link: https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1

string printSequence(string str){
    
    unordered_map<char, int> m;
    m['A']=2; m['B']=22; m['C']=222;
    m['D']=3; m['E']=33; m['F']=333;
    m['G']=4; m['H']=44; m['I']=444;
    m['J']=5; m['K']=55; m['L']=555;
    m['M']=6; m['N']=66; m['O']=666;
    m['P']=7; m['Q']=77; m['R']=777; m['S']=7777;
    m['T']=8; m['U']=88; m['V']=888;
    m['W']=9; m['X']=99; m['Y']=999; m['Z']=9999;
    m[' ']=0;
    string ans;
    for (int i=0; i<str.size(); i++){
        string temp=to_string(m[str[i]]);
        ans=ans+temp;
    }
    return ans;
    
}