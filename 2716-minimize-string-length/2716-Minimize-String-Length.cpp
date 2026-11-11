class Solution {
public:
    int minimizedStringLength(string s) {
        int co = 0;
        for(int i=0; i<s.size(); i++){
            bool found = false;
            for(int j=0; j<i; j++){
                if(s[i] == s[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                co++;
            }
        }
        return co;
    }
};