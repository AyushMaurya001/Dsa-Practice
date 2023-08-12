class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int row=matrix.size(), col=matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row));
        for (int i=0; i<matrix.size(); i++){
            for (int j=0; j<matrix[0].size(); j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;

    }
};