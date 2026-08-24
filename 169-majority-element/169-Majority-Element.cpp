class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int co = 0;
        int candidate = 0;
        for(int i=0; i<n; i++){
            if(co == 0){
                candidate = nums[i];
            }
            if(nums[i]==candidate){
                co++;
            }
            else{
                co--;
            }
        }
        return candidate;
    }
};