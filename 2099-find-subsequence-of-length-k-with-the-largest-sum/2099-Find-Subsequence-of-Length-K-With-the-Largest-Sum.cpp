class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int> tans(k);
        vector<int> temp = nums;

        sort(temp.begin(), temp.end());

        for(int i = k; i > 0; i--) {
            tans[i-1] = temp[n-i];
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < k; j++) {
                if(nums[i] == tans[j]) {
                    ans.push_back(nums[i]);
                    tans[j] = INT_MIN;
                    break;
                }
            }

            if(ans.size() == k) {
                break;
            }
        }

        return ans;
    }
};