class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnd = nums[0];
        int minEnd = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int oldMax = maxEnd;
            int oldMin = minEnd;

            maxEnd = max({nums[i],
                          nums[i] * oldMax,
                          nums[i] * oldMin});

            minEnd = min({nums[i],
                          nums[i] * oldMax,
                          nums[i] * oldMin});

            result = max(result, maxEnd);
        }

        return result;
    }
};