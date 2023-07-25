// link: https://www.codingninjas.com/studio/problems/possible-words-from-a-phone-number_1094907?leftPanelTab=0

#include <bits/stdc++.h> 

void combo(string str, string temp, vector<string>& ans, int i, string map[]){

	if (i>=str.size()){
		ans.push_back(temp);
		return;
	}
	int num=str[i]-'2';
	string a=map[num];
	for (int j=0; j<a.size(); j++){
		temp.push_back(a[j]);
		combo(str, temp, ans, i+1, map);
		temp.pop_back();
	}

}

vector<string> findPossibleWords(string s){
	
	string temp;
	vector<string> ans;
	string map[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	combo(s, temp, ans, 0, map);
	return ans;

}