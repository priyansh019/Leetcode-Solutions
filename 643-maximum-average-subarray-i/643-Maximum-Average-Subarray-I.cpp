//class Solution {
//public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
       double max=0;
       for(int i=0; i<k; i++){
        max += nums[i];
       }
       for(int i=0; i<=n-k; i++){
        double temp =0;
        for(int j=i; j<i+k; j++){
            temp += nums[j];
        }
        if(max<temp){
            max = temp;
        }
       }
       max = max/k;
       return max;
    }
//};

// optimised one
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        double sum = 0;

        // First k elements
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double max = sum;

        // Slide the window
        for(int i = k; i < n; i++) {
            sum = sum - nums[i-k] + nums[i];

            if(sum > max) {
                max = sum;
            }
        }

        return max / k;
    }
};