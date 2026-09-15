class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int co=0;
        vector<int> exp(n);
        for(int i=0; i<n; i++){
            exp[i]=heights[i];
        }
        sort(exp.begin(), exp.end());
        for(int i=0; i<n; i++){
            if(heights[i]!=exp[i]){
                co++;
            }
        }
        return co;
    }
};