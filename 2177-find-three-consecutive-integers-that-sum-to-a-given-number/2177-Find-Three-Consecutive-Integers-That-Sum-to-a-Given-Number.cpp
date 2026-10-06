class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3!=0){
            return {};
        }
        else{
            long long x=num/3;
            return{x-1, x, x+1};
        }
    }
};