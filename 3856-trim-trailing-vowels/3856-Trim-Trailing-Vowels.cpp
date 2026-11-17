class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        int i = n - 1;

        string v = "aeiou";

        while(i >= 0) {
            if(v.find(s[i]) != string::npos) {
                i--;
            }
            else {
                break;
            }
        }

        return s.substr(0, i + 1);
    }
};