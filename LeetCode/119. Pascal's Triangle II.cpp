class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> pre;
        for (int i=1; i<=rowIndex+1; i++){
            vector<int> temp(i);
            for (int j=0; j<i; j++){
                if (j==0) temp[j]=1;
                else if (j==i-1) temp[j]=1;
                else temp[j]=pre[j-1]+pre[j];
            }
            pre=temp;
        }
        return pre;

    }
};