
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxi = 0;
        int ans = -1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                int co = 0;

                for(int j = i; j < nums.size(); j++) {
                    if(nums[i] == nums[j]) {
                        co++;
                    }
                    else {
                        break;
                    }
                }

                if(co > maxi) {
                    maxi = co;
                    ans = nums[i];
                }

                i += co - 1;
            }
        }

        return ans;
    }
};
