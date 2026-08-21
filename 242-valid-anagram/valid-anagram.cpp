class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        else{
        for(char c : t){
            if(s.find(c) != string::npos){
                s.erase(s.find(c), 1);
            }
        }
        }
        return s.empty();
    }
};