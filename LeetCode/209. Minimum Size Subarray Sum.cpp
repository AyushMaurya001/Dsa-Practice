class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        if (target==1) return 1;
        int ans=INT_MAX, i=0, j=0, sum=nums[0], size=1, n=nums.size();
        while (i<n && i<=j && j<n){
            if (sum<target){
                j++; size++;
                if (j<n) sum+=nums[j];
            } else {
                if (size<ans) ans=size;
                if (ans==1) return 1;
                sum-=nums[i];
                i++; size--;
            }
        }
        if (ans==INT_MAX) return 0;
        return ans;

    }
};