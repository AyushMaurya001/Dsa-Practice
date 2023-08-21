class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> ans;
        string a="Push", b="Pop"; int index=0;
        for (int i=1; i<=n && index!=target.size(); i++){
            if (target[index]==i){
                index++; ans.push_back(a);
            } else {
                ans.push_back(a); ans.push_back(b);
            }
        }
        return ans;

    }
};