class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> count;
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        // Count frequency and store first/last position
        for(int i = 0; i < n; i++) {

            count[nums[i]]++;

            if(first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }

            last[nums[i]] = i;
        }

        // Find degree
        int degree = 0;

        for(int i = 0; i < n; i++) {
            if(count[nums[i]] > degree) {
                degree = count[nums[i]];
            }
        }

        // Find shortest length
        int ans = n;

        for(int i = 0; i < n; i++) {
            if(count[nums[i]] == degree) {

                int length = last[nums[i]] - first[nums[i]] + 1;

                if(length < ans) {
                    ans = length;
                }
            }
        }

        return ans;
    }
};