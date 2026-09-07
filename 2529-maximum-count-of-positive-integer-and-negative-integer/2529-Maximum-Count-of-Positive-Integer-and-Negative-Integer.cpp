class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int co1=0, co2=0;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                co1++;
            }
            if(nums[i]<0){
                co2++;
            }
        }
        return co1>co2 ? co1 : co2;
    }
};