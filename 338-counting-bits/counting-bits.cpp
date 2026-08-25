class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);

        for(int i = 1; i <= n; i++) {
            int x = i;

            while(x > 0) {
                result[i] += (x & 1);
                x >>= 1;
            }
        }

        return result;
    }
};