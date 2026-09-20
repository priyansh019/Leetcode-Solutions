class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int x = 1;

        while(k > 0) {

            bool found = false;

            for(int i = 0; i < n; i++) {
                if(arr[i] == x) {
                    found = true;
                    break;
                }
            }

            if(found == false) {
                k--;
            }

            if(k == 0) {
                return x;
            }

            x++;
        }

        return x;
    }
};