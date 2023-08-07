class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size(), col=matrix[0].size();
        int s=0, e=row*col-1, m=s+(e-s)/2;
        while (s<=e){
            int r=m/col, c=m%col;
            if (matrix[r][c]==target) return true;
            else if (matrix[r][c]<target) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        return false;

    }
};