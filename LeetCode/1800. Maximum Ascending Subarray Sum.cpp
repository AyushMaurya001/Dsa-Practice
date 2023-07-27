class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        if (nums.size()==1) return nums[0];
        int i=0, sum=nums[i++], max=sum;
        while (i<nums.size()){
            if (nums[i]>nums[i-1]){
                sum+=nums[i++];
                if (sum>max) max=sum;
            } else {
                sum=nums[i++];
                if (sum>max) max=sum;
            }
        }
        return max;


    }
};