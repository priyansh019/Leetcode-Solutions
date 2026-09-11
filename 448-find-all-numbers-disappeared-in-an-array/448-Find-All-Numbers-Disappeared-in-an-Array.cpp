class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_set<int> s;
        // Store all numbers present in nums
        for(int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        // Check numbers from 1 to n
        for(int i = 1; i <= n; i++) {
            bool found = false;
            if(s.find(i) != s.end()) {
                found = true;
            }
            if(found == false) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};