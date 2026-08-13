class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int fq[30001]={0};
        for(int i=0; i<n; i++){
            fq[nums[i]+10000]++;
        }   
        for(int i=0; i<n; i++){
            if(fq[nums[i]+10000] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};