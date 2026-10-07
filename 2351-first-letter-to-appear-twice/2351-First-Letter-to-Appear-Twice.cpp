class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        int idx=n;
        char ch=' ';

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j] && j<idx){
                    idx=j;
                    ch=s[j];
                }
            }
        }

        return ch;
    }
};