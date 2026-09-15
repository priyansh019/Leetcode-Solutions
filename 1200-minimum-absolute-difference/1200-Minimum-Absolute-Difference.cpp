class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int min=arr[1]-arr[0];
        for(int i=0; i<n-1; i++){
            int sub = arr[i+1] - arr[i];
            if(sub<min){
                min=sub;
            }
        }

        vector<vector<int>> ans;
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] - arr[i] == min) {
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;
    }
};