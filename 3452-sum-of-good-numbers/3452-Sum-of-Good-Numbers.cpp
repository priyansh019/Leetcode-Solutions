class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int goodnum=0;
        for(int i=0; i<nums.size(); i++){
            if(((i-k)<0 or nums[i]>nums[i-k] )&&(i+k>=nums.size() or nums[i]>nums[i+k])){
                goodnum+=nums[i];
            }
        }
        return goodnum;
    }
};