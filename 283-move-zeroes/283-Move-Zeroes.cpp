class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                if(temp != i) {
                    nums[temp] = nums[i];
                    nums[i] = 0;
                }
                temp++;
            }
        }
    }
};