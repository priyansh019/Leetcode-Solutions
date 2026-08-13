class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int co = 0;
        int can = 0;
        for(int i=0; i<n; i++){
            if(co == 0){
                can = nums[i];
            }
            if(nums[i]==can){
                co++;
            }
            else{
                co--;
            }
        }
        return can;
    }
};