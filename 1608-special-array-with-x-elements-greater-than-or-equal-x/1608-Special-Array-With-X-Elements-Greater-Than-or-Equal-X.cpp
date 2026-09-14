class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        for(int x = 0; x <= n; x++) {
            int co = 0;
            for(int i = 0; i < n; i++) {
                if(nums[i] >= x) {
                    co++;
                }
            }
            if(co == x) {
                return x;
            }
        }
        return -1;
    }
};