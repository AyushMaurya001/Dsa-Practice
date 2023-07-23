// link: https://www.codingninjas.com/studio/problems/subsequences-of-string_985087?leftPanelTab=0

#include <bits/stdc++.h> 

void subset(string str, vector<string>& ans, string output, int i){

	if (i>=str.size()){
		if (output.size()==0) return;
		ans.push_back(output);
		return;
	}
	subset(str, ans, output, i+1);
	output.push_back(str[i]);
	subset(str, ans, output, i+1);

}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output;
	subset(str, ans, output, 0);
	return ans;
	
}