class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps=0,l=0,r=0;
        int far=0;
        while(r<n-1){
            for(int i=l; i<=r; i++){
                far = max(far, i+nums[i]);
            }
            l = r+1;
            r = far;
            jumps++;
        }
        return jumps;
    }
};