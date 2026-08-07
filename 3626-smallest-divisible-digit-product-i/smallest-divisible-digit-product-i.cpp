class Solution {
public:
    int smallestNumber(int n, int t) {
        if (n / 10 != 0){
        while (((n / 10) * (n % 10)) % t != 0){
            n++;
        }
        }
        else{
            while (n % t != 0 && n < 10){
            n++;
        }
        }
        return n;
    }
};