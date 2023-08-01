class Solution {

private:
    void combo(vector<int> nums, int i, vector<int> temp, vector<vector<int>> &ans, int k){

        if (temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if (i>=nums.size() || (temp.size()+nums.size()-i)<k){
            return;
        }
        combo(nums, i+1, temp, ans, k);
        temp.push_back(nums[i]);
        combo(nums, i+1, temp, ans, k);

    }

public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> nums;
        for (int i=0; i<n; i++) nums.push_back(i+1);
        if (n==k){
            ans.push_back(nums);
            return ans;
        }
        combo(nums, 0, temp, ans, k);
        return ans;

    }
};