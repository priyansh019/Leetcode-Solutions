class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans(n);
       for(int i=0; i<n; i++){
        ans[i] = nums[i]*nums[i];
       }
    // Manually Sorting   
       //for(int i = 0; i < n; i++) {
         //for(int j = 0; j < n - i - 1; j++) {
             //if(ans[j] > ans[j+1]) {
               //  int temp = ans[j];
                 //ans[j] = ans[j+1];
                 //ans[j+1] = temp;
                //}
            //}
        //}

        // Direct
        sort(ans.begin(), ans.end());
       return ans;
    }
};