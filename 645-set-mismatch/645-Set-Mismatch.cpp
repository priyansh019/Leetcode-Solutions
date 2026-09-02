class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int co, i, j;
        vector<int> ans(2);
        for(i=1;i<=n;i++){
            co=0;
            for(j=0;j<n;j++){
                if(nums[j]==i){
                    co++;
                }
            }
            if(co>1){   
                ans[0]=i;
            }
            if(co==0){
                ans[1]=i;
            }
        }
        return ans;
    }
};