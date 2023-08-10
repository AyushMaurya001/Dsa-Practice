class Solution {

private:
    bool bsearch(int s, int e, vector<int>& nums, int t){

        int m=s+(e-s)/2;
        while (s<=e){
            if (nums[m]==t) return true;
            else if (nums[m]<t) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        return false;

    }

public:
    bool search(vector<int>& nums, int target) {
        
        int pivot=0;
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i]==target) return true;
            else if (nums[i+1]==target) return true;
            else if (nums[i] > nums[i+1]){
                pivot=i+1; break;
            }
        }
        cout << pivot << endl;
        if (pivot==0) return bsearch(0, nums.size()-1, nums, target);
        if (target >= nums[0]) return bsearch(0, pivot-1, nums, target);
        return bsearch(pivot, nums.size()-1, nums, target);

    }
};