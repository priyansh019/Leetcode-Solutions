class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int t =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[j]==t){
                t++;
                }
            }
        }
        return t;  
    }
};