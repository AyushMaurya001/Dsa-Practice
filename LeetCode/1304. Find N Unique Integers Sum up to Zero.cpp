class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        if (n%2==1){
            ans.push_back(0); n--;
        }
        int i=1, cnt=0;
        while (n!=0){
            int temp;
            if (n%2==0) temp=i;
            else temp=-i;
            if (temp<0) i++;
            ans.push_back(temp);
            n--; cnt++;
        }
        return ans;

    }
};