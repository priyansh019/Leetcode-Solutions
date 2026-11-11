class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum=0, dSum=0;
        for(int i=0; i<nums.size(); i++){
            eSum+=nums[i];
            while(nums[i]>0){
                dSum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(eSum-dSum);
    }
};