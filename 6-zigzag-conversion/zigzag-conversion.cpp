class Solution {
public:
    static inline const auto init = [](){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        return 0;
    }();
    string convert(string s, int numRows) {
        if(numRows > 1){
            string zigzag; 
            for(int i = 0; i < numRows; i++){
                int shift = 2 * (numRows - 1);
                for (int j = i; j < s.size(); j = j + shift){
                    zigzag = zigzag + s[j];
                    if (i > 0 && i < numRows - 1 && j + shift < s.size() + 2 * i){
                        zigzag = zigzag + s[j + shift - 2 * i];
                    }
                }

            }
            return zigzag;
        }
        else{
            return s;
        }
        
    }
};