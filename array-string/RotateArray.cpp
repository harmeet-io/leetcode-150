class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);
        int i=0,j=k;

        int cnt=n;
        while(cnt--){
            temp[j%n] = nums[i%n];
            i++; j++;
        }

        nums = temp;
    }
};