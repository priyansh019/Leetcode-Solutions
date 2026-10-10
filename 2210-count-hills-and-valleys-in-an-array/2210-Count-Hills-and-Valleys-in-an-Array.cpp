// class Solution {
// public:
//     int countHillValley(vector<int>& nums) {
//         int n = nums.size();
//         int co = 0;

//         for(int i = 1; i < n - 1; i++) {
//             if(nums[i] == nums[i-1]) {
//                 continue;
//             }

//             int left = i - 1;
//             while(left >= 0 && nums[left] == nums[i]) {
//                 left--;
//             }

//             int right = i + 1;
//             while(right < n && nums[right] == nums[i]) {
//                 right++;
//             }

//             if(left >= 0 && right < n) {
//                 if(nums[i] > nums[left] && nums[i] > nums[right]) {
//                     co++;
//                 }
//                 else if(nums[i] < nums[left] && nums[i] < nums[right]) {
//                     co++;
//                 }
//             }
//         }

//         return co;
//     }
// };

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> arr;

        for(int i = 0; i < nums.size(); i++) {
            if(arr.empty() || arr.back() != nums[i]) {
                arr.push_back(nums[i]);
            }
        }

        int co = 0;
        for(int i = 1; i < arr.size() - 1; i++) {
            if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) ||
               (arr[i] < arr[i-1] && arr[i] < arr[i+1])) {
                co++;
            }
        }

        return co;
    }
};