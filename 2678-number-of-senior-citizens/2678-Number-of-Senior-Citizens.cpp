class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int co=0;
        for(int i=0; i<n; i++){
            int j=11;
            int age = (details[i][j] - '0') * 10 + (details[i][j+1] - '0');
            if(age>60){
                co++;
            }
        }
        return co;
    }
};