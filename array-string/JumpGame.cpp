class Solution {
private:
    int rec(int i, vector<int>&nums,vector<int>&dp){
        // pruning
        if(i>=nums.size()) return false;

        // base case
        if(i==nums.size()-1) return true;

        // cache check
        if(dp[i] != -1) return dp[i];

        // compute
        bool ans=false;
        for(int k=1; k<=nums[i]; k++){
            // ans |= rec(i+k, nums,dp);
            if(rec(i+k,nums,dp))
                return dp[i] = true;
        }

        // save and return
        return dp[i] = ans;
    }
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return rec(0,nums,dp);
    }
};