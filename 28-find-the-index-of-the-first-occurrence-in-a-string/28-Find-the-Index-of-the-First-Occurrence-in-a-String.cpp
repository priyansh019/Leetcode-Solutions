class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        int idx=-1;

        for(int i=0; i<=m-n; i++){
            int co=0;
            for(int j=0; j<n; j++){
                if(haystack[i+j]==needle[j]){
                    co++;
                }
            }
            if(co==n){
                idx=i;
                break;
            }
        }
        return idx;
    }
};