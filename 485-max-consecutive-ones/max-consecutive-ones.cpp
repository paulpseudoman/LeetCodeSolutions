class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        nums.insert(nums.begin(),0);
        vector<int> diff;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                diff.push_back(i);
            }
        }
        int maxdiff = diff[0];
        for(int j = 1; j < diff.size(); j++){
            maxdiff = max(maxdiff, diff[j] - diff[j-1]);
        }
        return maxdiff - 1;
    }
};