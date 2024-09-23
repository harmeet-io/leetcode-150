class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Boyre-Moore Voting Algorithm

        int candidate=0,cnt=0;
        for(auto x : nums){
            if(cnt==0) candidate = x;

            if(candidate == x) cnt++;
            else cnt--;
        }

        return candidate;
    }
};