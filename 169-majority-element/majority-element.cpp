class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;
        for(int num : nums){
            if(count == 0){
                candidate = num;
                count = 1;
            }
            else{
                if(num == candidate){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        count = 0;
        for(int num : nums){
            if(num == candidate){
                count++;
            }
        }
        if(count > nums.size() / 2){
            return candidate;
        }
        else{
            return NULL;
        }
    }
};