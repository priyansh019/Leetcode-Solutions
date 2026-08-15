class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int p = 0;
        vector<int> runsum(n);
        for(int i=0; i<n ; i++){
            runsum[i] = nums[i]+p;
            p = runsum[i];
        }
        return runsum;
    }
};