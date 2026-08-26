class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size(),i=0;
        for(i; i<n-1; i++){
            if(arr[i]>=arr[i+1]){
                break;
            }
        }
        if(i==0 or i==n-1){
            return false;
        }
        for(i; i<n-1; i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};