class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mxdif=-1;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]<nums[j]){
                    mxdif= max(mxdif, nums[j]-nums[i]);
                }
            }
        }
        return mxdif;
    }
};

// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int minVal = nums[0];
//         int maxDiff = -1;

//         for (int j = 1; j < nums.size(); j++) {
//             if (nums[j] > minVal) {
//                 maxDiff = max(maxDiff, nums[j] - minVal);
//             } else {
//                 minVal = nums[j]; // Update minVal if a smaller element is found
//             }
//         }

//         return maxDiff;
//     }
// };