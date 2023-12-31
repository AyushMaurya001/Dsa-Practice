class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start=0, have=0, need=0;
        for (int i=0; i<gas.size(); i++){
            have=have+gas[i]-cost[i];
            if (have<0){
                need+=have;
                have=0; start=i+1;
            }
        }
        if (have+need>=0) return start;
        return -1;

    }
};