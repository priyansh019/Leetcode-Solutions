// class Solution {
// public:
//     int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//         int n = arr.size();
//         int co = 0;
//         for(int i = 0; i <= n-k; i++) {
//             int avg = 0;
//             for(int j = i; j < k+i; j++) {
//                 avg = avg + arr[j];
//             }
//             if((avg/k) >= threshold) {
//                 co++;
//             }
//         }
//         return co;
//     }
// };

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int co = 0;
        int sum = 0;

        // First window
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        if(sum >= k * threshold) {
            co++;
        }

        // Move the window
        for(int i = k; i < n; i++) {
            sum = sum - arr[i-k] + arr[i];

            if(sum >= k * threshold) {
                co++;
            }
        }

        return co;
    }
};