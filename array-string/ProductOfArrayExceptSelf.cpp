
// Normally can be solved by making 2 pre-fix arrays, pre and pos ==> O(n) with space
// But can be solved using variables pre and pos too ==> O(1)
// Time complexity ==> O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(n,1);
        int pre=1,pos=1; 

        for(int i=1; i<n; i++){
            pre *= nums[i-1];
            out[i] = pre;
        }

        for(int i=n-2; i>=0; i--){
            pos *= nums[i+1];
            out[i] *= pos;
        }

        return out;
    }
};