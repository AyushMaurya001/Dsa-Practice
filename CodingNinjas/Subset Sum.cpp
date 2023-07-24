// link: https://www.codingninjas.com/studio/problems/subset-sum_3843086?leftPanelTab=0

void solve(vector<int> num, vector<int> &ans, int sum, int i){

	if (i>=num.size()){
		ans.push_back(sum);
		return;
	}
	solve(num, ans, sum, i+1);
	sum+=num[i];
	solve(num, ans, sum, i+1);

}

vector<int> subsetSum(vector<int> &num){
	
	vector<int> ans;
	solve(num, ans, 0, 0);
	sort(ans.begin(), ans.end());
	return ans;

}