class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(nums1[i] == nums2[j]) {

                    bool found = false;

                    // Check if already present in ans
                    for(int k = 0; k < ans.size(); k++) {
                        if(ans[k] == nums1[i]) {
                            found = true;
                            break;
                        }
                    }

                    // If not present, add it
                    if(found == false) {
                        ans.push_back(nums1[i]);
                    }

                    break;
                }
            }
        }

        return ans;
    }
};