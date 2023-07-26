// link: https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

class Solution{
    
    // bool valid(vector<vector<int>> arr, vector<vector<bool>> visited, int n, int x, int y){
    //     if (x<0 || y<0 || x>=n || y>=n) return 0;
    //     if (visited[x][y]==1 || arr[x][y]==0) return 0;
    //     return 1;
    // }
    
    void path(vector<vector<int>> arr, int n, int x, int y, string temp, vector<string>& ans){
        
        if (x==n-1 && y==n-1){
            ans.push_back(temp);
            return;
        }
        if (x<0 || y<0 || x>=n || y>=n) return;
        if (arr[x][y]==0) return;
        
        arr[x][y]=0;
        // visited[x][y]=1;
        // if (valid(arr, visited, n, x+1, y)){
            path(arr, n, x+1, y, temp+'D', ans);
        // }
        // if (valid(arr, visited, n, x, y+1)){
            path(arr, n, x, y+1, temp+'R', ans);
        // }
        // if (valid(arr, visited, n, x, y-1)){
            path(arr, n, x, y-1, temp+'L', ans);
        // }
        // if (valid(arr, visited, n, x-1, y)){
            path(arr, n, x-1, y, temp+'U', ans);
        // }
        // visited[x][y]=0;
        
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &arr, int n) {
        
        if (arr[0][0]==0 || arr[n-1][n-1]==0){
            return {};
        }
        vector<string> ans;
        string temp;
        // vector<vector<bool>> visited(n, vector<bool> (n));
        // for (int i=0; i<n; i++){
        //     for (int j=0; j<n; j++){
        //         visited[i][j]=0;
        //     }
        // }
        path(arr, n, 0, 0, temp, ans);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};