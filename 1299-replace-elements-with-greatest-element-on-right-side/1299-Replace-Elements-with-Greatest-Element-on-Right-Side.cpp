class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int max = -1;
            for(int j = i + 1; j < n; j++) {
                if(arr[j] > max) {
                    max = arr[j];
                }
            }
            ans[i] = max;
        }
        return ans;
    }
};