
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n-1; i++) {
            if(nums[i] == key) {
                ans.push_back(nums[i+1]);
            }
        }

        int maxi = 0;
        int num = 0;

        for(int i = 0; i < ans.size(); i++) {
            int co = 0;

            for(int j = 0; j < ans.size(); j++) {
                if(ans[i] == ans[j]) {
                    co++;
                }
            }

            if(co > maxi) {
                maxi = co;
                num = ans[i];
            }
        }

        return num;
    }
};
