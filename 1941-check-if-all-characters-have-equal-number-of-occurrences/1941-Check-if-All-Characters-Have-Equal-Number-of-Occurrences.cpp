class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        int co = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                if(co == 0) {
                    co = freq[i];
                }
                else if(co != freq[i]) {
                    return false;
                }
            }
        }

        return true;
    }
};