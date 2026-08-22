class Solution {
public:
    void rotate(vector<int>& nums, long long k) {
        int n=nums.size();
        vector<int> temp(n);
        int a=0;
        k = k % n;
        for(int i=n-k; i<n; i++){
            temp[a]=nums[i];
            a++;
        }
        for(int j=0; j<n-k; j++){
            temp[a]=nums[j];
            a++;
        }
        for(int m=0; m<n; m++){
            nums[m]=temp[m];
        }
    }
};