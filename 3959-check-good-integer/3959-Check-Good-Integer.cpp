class Solution {
public:
    bool checkGoodInteger(int n) {
        vector<int> v;
        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }
        int dsum=0;
        int sqsum=0;
        for(int i=0; i<v.size(); i++){
            dsum+=v[i];
            sqsum+=v[i]*v[i];
        }
        if(sqsum-dsum>=50){
            return true;
        }
        return false;
    }
};