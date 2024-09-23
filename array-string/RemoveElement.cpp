class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0,j=nums.size()-1;
        while(i<=j){
            while(i<n and nums[i] != val) i++;
            while(j>=0 and nums[j]==val) j--;

            if(i<j) swap(nums[i],nums[j]);
        }

        return i;
    }
};