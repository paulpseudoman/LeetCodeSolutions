class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            int current = nums[i];
            int remaining = target - current;
            if(hash.find(remaining) != hash.end()){
                return {hash[remaining], i};
            }
            else{
                hash[current] = i;
            }
        }
        return{};
    }
};