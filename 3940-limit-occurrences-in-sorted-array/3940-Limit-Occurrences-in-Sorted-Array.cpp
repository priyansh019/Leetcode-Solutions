class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        int co = 0;

        for(int i = 0; i < n; i++) {

            if(i == 0 || nums[i] != nums[i-1]) {
                co = 1;
            }
            else {
                co++;
            }

            if(co <= k) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};