class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int maxEnd = nums[0];
        for(int i = 1; i < nums.size(); i++){
            maxEnd = max(nums[i], maxEnd + nums[i]);
            result = max(maxEnd, result);
        }
        return result;
    }
};