class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int lsum = 0;
            int rsum = 0;
            // Sum elements on the left
            for(int j = 0; j < i; j++) {
                lsum += nums[j];
            }
            // Sum elements on the right
            for(int j = i + 1; j < n; j++) {
                rsum += nums[j];
            }
            if(lsum == rsum) {
                return i;
            }
        }
        return -1;
    }
};