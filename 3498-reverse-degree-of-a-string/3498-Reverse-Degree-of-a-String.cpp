class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            int pos = 26 - (s[i] - 'a');
            sum += pos * (i+1);
        }
        return sum;
    }
};