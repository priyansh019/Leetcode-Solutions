class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size())
            return "";

        vector<int> freq(128, 0);

        // Count characters required from t
        for(char c : t) {
            freq[c]++;
        }

        int left = 0;
        int count = t.size();

        int start = 0;
        int minLen = INT_MAX;

        for(int right = 0; right < s.size(); right++) {

            // If this character is needed
            if(freq[s[right]] > 0) {
                count--;
            }

            freq[s[right]]--;

            // Window contains all characters of t
            while(count == 0) {

                // Check if current window is smaller
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove left character
                freq[s[left]]++;

                if(freq[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};