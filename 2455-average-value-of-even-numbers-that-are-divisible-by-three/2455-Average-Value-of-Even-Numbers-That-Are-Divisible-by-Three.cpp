class Solution {
public:
    int averageValue(vector<int>& nums) {
        int co=0;
        int sum=0, avg=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                co++;
                sum+=nums[i];
            }
        }
        if(co==0){
            return 0;
        }
        else{
            avg=sum/co;
        }
        return avg;
    }
};