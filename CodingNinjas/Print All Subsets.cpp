link: https://www.codingninjas.com/studio/problems/print-all-subsets_2041995?leftPanelTab=0

void solve(vector<int> arr, vector<int> temp, int i){

    if (i>=arr.size()){
        for (int j=0; j<temp.size(); j++){
            cout << temp[j] << " ";
        }
        cout << endl; return;
    }
    solve(arr, temp, i+1);
    temp.push_back(arr[i]);
    solve(arr, temp, i+1);

}

void printAllSubsets(int n, vector<int> &arr){
    
    vector<int> temp;
    solve(arr, temp, 0);

}