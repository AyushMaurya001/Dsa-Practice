// link: https://www.codingninjas.com/studio/problems/rat-in-a-maze_1215030?leftPanelTab=0

#include <bits/stdc++.h> 

void path(vector<vector<int>> arr, vector<string>& ans, string temp, int n, int x, int y){

    if (x==n-1 && y==n-1){
        ans.push_back(temp); return;
    }
    if (x<0 || y<0 || x>=n || y>=n) return;
    if (arr[x][y]==0) return;
    arr[x][y]=0;
    path(arr, ans, temp+"U", n, x-1, y);
    path(arr, ans, temp+"D", n, x+1, y);
    path(arr, ans, temp+"L", n, x, y-1);
    path(arr, ans, temp+"R", n, x, y+1);

}

vector<string> searchMaze(vector<vector<int>>& arr, int n) {

    if (arr[0][0]==0 || arr[n-1][n-1]==0){
        return {};
    }
    vector<string> ans;
    string temp="";
    path(arr, ans, temp, n, 0, 0);
    sort(ans.begin(), ans.end());
    return ans;
    
}