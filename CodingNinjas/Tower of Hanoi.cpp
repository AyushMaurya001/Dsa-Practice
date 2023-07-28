// link: https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118522/offering/1380918?leftPanelTab=0

void tower(int n, int a, int c, int b, vector<vector<int>>& ans){

    if (n==1){
        vector<int> temp;
        temp.push_back(a); temp.push_back(c);
        ans.push_back(temp);
        return;
    }
    tower(n-1, a, b, c, ans);
    vector<int> temp;
    temp.push_back(a); temp.push_back(c);
    ans.push_back(temp);
    tower(n-1, b, c, a, ans);

}

vector<vector<int>> towerOfHanoi(int n){
    
    vector<vector<int>> ans;
    tower(n, 1, 3, 2, ans);
    return ans;

}