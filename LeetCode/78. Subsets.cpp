// link: https://leetcode.com/problems/subsets/description/

class Solution {
public:

    void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int i){

        if (i>=nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums, ans, output, i+1);
        output.push_back(nums[i]);
        solve(nums, ans, output, i+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, ans, output, 0);
        return ans;

    }
};