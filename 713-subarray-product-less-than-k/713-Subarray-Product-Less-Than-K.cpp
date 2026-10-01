class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, co = 0, product = 1;

        if(k <= 1)
            return 0;

        for(int right = 0; right < n; right++) {

            product *= nums[right];

            while(product >= k) {
                product /= nums[left];
                left++;
            }

            co += right - left + 1;
        }

        return co;
    }
};