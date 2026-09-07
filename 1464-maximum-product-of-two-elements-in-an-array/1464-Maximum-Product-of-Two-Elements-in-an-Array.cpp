class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max=0;
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(max<nums[i]*nums[j]){
                    max = nums[i]*nums[j];
                    ans=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return ans;
    }
};