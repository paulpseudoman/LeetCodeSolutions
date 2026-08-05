class Solution {
public:
    int myAtoi(string s) {
        long long output = 0; 
        int i = 0;
        int sign = 1;
        while(i < s.size() && s[i] == ' '){
            i++;
        }
        if(i < s.size() && s[i] == '-'){
        sign = -1;
        i++; 
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }
        while( i < s.size() && s[i] >= '0' && s[i] <= '9'){
            output = output * 10 + (s[i] - '0');
            if (sign * output > INT_MAX) {
                return INT_MAX;
            }

            if (sign * output < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return output * sign;


    }

};