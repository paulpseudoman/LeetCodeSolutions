class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  = nums.size();
        for(int i = n; i >= 0; i--){
                if(find(nums.begin(), nums.end(), i) == nums.end()){
                    return i;
                }
            }
            return -1;
        }
};