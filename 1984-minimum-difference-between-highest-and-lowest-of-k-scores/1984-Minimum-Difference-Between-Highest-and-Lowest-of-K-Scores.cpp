class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mini = INT_MAX;
        int i = 0;
        while(i <= n-k){
            int diff = nums[i+k-1] - nums[i];
            mini = min(mini, diff);
            i++;
        }
        return mini;
    }
};