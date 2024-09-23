
// Greedy algorithm
// If the total gas avail is less than the total cost req, no solution exits!
// For the diff array, we need the start point from where the maximum sum subarray can be computed
// Hence, Kadane algorithm can also be used

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total=0,start=0;

        if( accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) return -1;

        for(int i=0; i<n; i++){
            total += (gas[i] - cost[i]);
            
            if(total < 0){
                total = 0;
                start = i+1;
            }
        }

        return start;
    }
};