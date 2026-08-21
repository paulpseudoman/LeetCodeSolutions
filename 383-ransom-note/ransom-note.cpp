class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(char c : magazine){
            size_t pos = ransomNote.find(c);
            if(pos != string::npos){
                ransomNote.erase(pos, 1);
            }
        }
        return ransomNote.empty();
    }
};