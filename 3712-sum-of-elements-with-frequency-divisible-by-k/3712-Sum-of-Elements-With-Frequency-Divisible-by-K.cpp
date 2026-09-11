class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        int co = 0, sum = 0;

        for(int i = 0; i < n; i++) {
            co = 0;

            for(int j = 0; j < n; j++) {
                if(nums[i] == nums[j]) {
                    co++;
                }
            }

            if(co % k == 0) {
                sum += nums[i];
            }
        }

        return sum;
    }
};