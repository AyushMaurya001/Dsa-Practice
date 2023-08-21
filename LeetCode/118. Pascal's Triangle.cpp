class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        vector<int> pre;
        for (int i=1; i<=numRows; i++){
            vector<int> temp(i);
            for (int j=0; j<i; j++){
                if (j==0) temp[j]=1;
                else if (j==i-1) temp[j]=1;
                else temp[j]=pre[j-1]+pre[j];
            }
            ans.push_back(temp);
            pre=temp;
        }
        return ans;

    }
};