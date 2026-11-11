class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> num;
        while(n>0){
            num.push_back(n%10);
            n=n/10;
        }
        reverse(num.begin(), num.end());
        int sum=num[0];
        for(int i=1; i<num.size(); i++){
            if(i%2==0){
                sum+=num[i];
            }
            else{
                sum-=num[i];
            }
        }
        return sum;
    }
};