class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int co=0;
        sort(nums.begin(), nums.end());
        if(k==0){
            for(int i=1; i<nums.size(); i++){
                if(nums[i]==nums[i-1]){
                    co++;
                    while(i<nums.size() && nums[i]==nums[i-1]){
                        i++;
                    }
                }
            }
            return co;
        }
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k){
                    co++;
                }
            }
        }
        return co;
    }
};