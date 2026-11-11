class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int co = -1;
        for(int i = 0; i < s.size(); i++) {
            for(int j = i + 1; j < s.size(); j++) {
                if(s[i] == s[j]) {
                    co = max(co, j - i - 1);
                }
            }
        }
        return co;
    }
};