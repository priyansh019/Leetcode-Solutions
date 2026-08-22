class Solution {
public:
    void rotate(vector<int>& nums, long long k) {
       long long n = nums.size();
       for(long long j =0;j<k;j++){
            long long l = nums[n-1];
            for(long long i = n-1; i>0; i--){
                nums[i] = nums[i-1];
            }
            nums[0] = l;  
            }
        }
};