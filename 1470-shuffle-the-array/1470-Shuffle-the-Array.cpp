class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x = nums.size();
        vector<int> sfl(x);
        for(int i=0; i<n ; i++){
            sfl[2*i] = nums[i];
            sfl[2*i + 1] = nums[i+n];
        }
        return sfl;
    }
};