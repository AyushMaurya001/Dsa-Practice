// link: https://www.codingninjas.com/studio/problems/letter-combinations-of-a-phone-number_983623?leftPanelTab=0

void combo(string str, string map[], string temp, vector<string>& ans, int j){

	if (j>=str.size()){
		ans.push_back(temp);
		return;
	}
	int num=str[j]-'0';
	string a=map[num];
	for (int i=0; i<a.size(); i++){
		temp.push_back(a[i]);
		combo(str, map, temp, ans, j+1);
		temp.pop_back();
	}

}

vector<string> combinations(string s){
	
	string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	vector<string> ans;
	string temp;
	combo(s, map, temp, ans, 0);
	return ans;
	
}
