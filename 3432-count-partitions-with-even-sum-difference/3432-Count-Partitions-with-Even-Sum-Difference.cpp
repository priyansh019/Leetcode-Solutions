class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int co = 0;
        for(int i = 0; i < n-1; i++) {
            int left = 0;
            int right = 0;
            for(int j = 0; j <= i; j++) {
                left += nums[j];
            }
            for(int j = i+1; j < n; j++) {
                right += nums[j];
            }
            if((left-right) % 2 == 0) {
                co++;
            }
        }
        return co;
    }
};