class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> check;
        for (int i = 0; i < nums.size(); i++){
            if (check.find(nums[i]) != check.end()){
                return true;
            }
            else check[nums[i]] = i;
        }
        return false;
    }
};