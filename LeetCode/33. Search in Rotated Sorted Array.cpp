class Solution {

private:
    int bsearch(int s, int e, int t, vector<int>& nums){

        int m=s+(e-s)/2;
        while (s<=e){
            if (nums[m]==t) return m;
            else if (nums[m]<t) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        return -1;

    }

public:
    int search(vector<int>& nums, int target) {
        
        int s=0, point=-1, e=nums.size()-1;
        for (int i=0; i<e; i++){
            if (nums[i] > nums[i+1]){
                point=i+1; break;
            }
        }
        if (point==-1){
            return bsearch(s, e, target, nums);
        }
        if (target < nums[s]){
            return bsearch(point, e, target, nums);
        }
        return bsearch(s, point-1, target, nums);

    }
};