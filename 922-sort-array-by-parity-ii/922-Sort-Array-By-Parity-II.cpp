class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size(), m=0, j=1;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                ans[m]=nums[i];
                m+=2;
            }
            else{
                ans[j]=nums[i];
                j+=2;
            }
        }
        return ans;
    }
};