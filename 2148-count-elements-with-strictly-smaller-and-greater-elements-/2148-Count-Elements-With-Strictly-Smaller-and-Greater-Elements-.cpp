class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int co=0;
        for(int i=0; i<n; i++){
            bool found=false;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    found=true;
                }
            }
            for(int k=0; k<n; k++){
                if(nums[i]<nums[k] && found==true){
                    co++;
                    break;
                }
            }
        }
        return co;
    }
};