// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left = 1;
        long long int right = n;
        long long int mid;
        while(left <= right){
            mid  = (left + right) / 2;
            if(isBadVersion(mid) == false){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return left;
    }
};