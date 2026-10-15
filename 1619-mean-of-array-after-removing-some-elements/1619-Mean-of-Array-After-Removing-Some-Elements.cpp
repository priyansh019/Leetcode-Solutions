class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int rem=0.05*n;
        int x=n-(0.1*n);
        double total=0;
        for(int i=rem; i<n-rem; i++){
            total+=arr[i];
        }
        return (total/x);
    }
};