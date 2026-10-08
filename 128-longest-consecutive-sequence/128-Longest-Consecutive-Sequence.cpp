class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int n=nums.size();
        int co=1;
        int temp=1;

        for(int i=0; i<n-1; i++){

            if(nums[i+1]==nums[i]+1){
                co++;
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                co=1;
            }

            if(co>temp){
                temp=co;
            }
        }

        return temp;
    }
};