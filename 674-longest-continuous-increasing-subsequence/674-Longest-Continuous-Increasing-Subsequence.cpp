class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) {
            return 0;
        }
        int count = 1;
        int maxcount = 1;
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i - 1]) {
                count++;
                if(count > maxcount) {
                    maxcount = count;
                }
            }
            else {
                count = 1;
            }
        }
        return maxcount;
    }
};