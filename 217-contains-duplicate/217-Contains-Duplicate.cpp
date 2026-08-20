//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        int n=nums.size();
//        bool rep=false;
//        for(int i=0; i<n; i++){
//            for(int j=i+1; j<n; j++){
//                if(nums[j]==nums[i]){
//                    rep=true;
//               }
//           }
//        }
//        return rep;
//    }
//};

// Above is my solution but TLE occurs due to large array

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int i = 0; i < nums.size(); i++) {
            if(seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};