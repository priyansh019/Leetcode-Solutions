// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         int x = 1;

//         while(k > 0) {

//             bool found = false;

//             for(int i = 0; i < n; i++) {
//                 if(arr[i] == x) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(found == false) {
//                 k--;
//             }

//             if(k == 0) {
//                 return x;
//             }

//             x++;
//         }

//         return x;
//     }
// };

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int x = 1;

        for(int i = 0; i < n; i++) {

            while(x < arr[i]) {
                k--;

                if(k == 0) {
                    return x;
                }

                x++;
            }

            x++;
        }

        // Missing numbers after the end of arr
        return x + k - 1;
    }
};