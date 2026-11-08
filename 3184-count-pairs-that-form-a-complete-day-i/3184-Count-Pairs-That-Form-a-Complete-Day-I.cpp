class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int co=0;
        for(int i=0; i<hours.size(); i++){
            int sum=0;
            for(int j=i+1; j<hours.size(); j++){
                if((hours[i]+hours[j])%24==0){
                    co++;
                }
            }
        }
        return co;
    }
};