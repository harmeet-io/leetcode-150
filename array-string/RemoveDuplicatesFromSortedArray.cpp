class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() and j<nums.size()){
            while(j<nums.size() and nums[i] == nums[j]) j++;
            i++;
            
            if(i<nums.size() and j<nums.size()) nums[i] = nums[j];
        }

        return i;
    }
};