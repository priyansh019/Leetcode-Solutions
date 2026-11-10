class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=nums[n-1]; i>0; i--){
            if(nums[0]%i==0 && nums[n-1]%i==0){
                return i;
            }
        }
        return -1;
    }
};