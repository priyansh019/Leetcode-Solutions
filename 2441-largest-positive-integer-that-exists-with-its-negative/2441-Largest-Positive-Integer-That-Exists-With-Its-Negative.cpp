class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<n; j++){
                if(nums[i]==-nums[j] && i!=j){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};