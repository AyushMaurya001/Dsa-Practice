class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size(), answer=0;
        vector<int> ans;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(nums[i]+nums[j]==target && answer==0 && i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    answer++;
                }
            }
        }
        return ans;
    }
};