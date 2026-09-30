class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int co1 = 0;
        int ans = 0;

        for(int right = 0; right < n; right++) {

            if(nums[right] == 0) {
                co1++;
            }

            while(co1 > k) {
                if(nums[left] == 0) {
                    co1--;
                }
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};