class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        int idx=0;
        for(int i=0; i<n; i++){
            if(max<nums[i]){
                max=nums[i];
                idx=i;
            }
        }
        for(int i=0; i<n; i++){
            if(max< 2 * nums[i] && i!=idx){
                return -1;
            }
        }
        return idx;
    }
};