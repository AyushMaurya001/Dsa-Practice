// link: https://www.codingninjas.com/studio/problems/find-all-subsets_2041970?leftPanelTab=0

void subset(vector<int> arr, vector<vector<int>> &ans, vector<int> temp, int i){

    if (i>=arr.size()){
        ans.push_back(temp);
        return;
    }
    subset(arr, ans, temp, i+1);
    temp.push_back(arr[i]);
    subset(arr, ans, temp, i+1);

}

vector<vector<int>> FindAllSubsets(vector<int> &arr){

    vector<vector<int>> ans;
    vector<int> temp;
    subset(arr, ans, temp, 0);
    return ans;

}