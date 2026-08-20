class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int leftProd = 1;
        int rightProd = 1;
        for(int i = 0; i < nums.size(); i++){
            result[i] = leftProd;
            leftProd *= nums[i];
        }
        for(int j = nums.size() - 1; j > -1; j--){
            result[j] *= rightProd;
            rightProd *= nums[j];
        }
        return result;
    }
};