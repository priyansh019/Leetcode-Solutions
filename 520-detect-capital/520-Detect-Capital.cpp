class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        if(islower(word[0])) {
            for(int i = 1; i < n; i++) {
                if(isupper(word[i])) {
                    return false;
                }
            }
        }
        else {
            bool allUpper = true;
            bool allLowerAfterFirst = true;

            for(int i = 1; i < n; i++) {
                if(islower(word[i])) {
                    allUpper = false;
                }

                if(isupper(word[i])) {
                    allLowerAfterFirst = false;
                }
            }

            if(!allUpper && !allLowerAfterFirst)
                return false;
        }

        return true;
    }
};