class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size(), total = 0;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n && 0 < k; i++) {
            if(nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        sort(nums.begin(), nums.end());

        if(k % 2 == 1) {
            nums[0] = -nums[0];
        }

        for(int i = 0; i < n; i++) {
            total += nums[i];
        }

        return total;
    }
};