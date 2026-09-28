// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr) {
//        int n=arr.size();
//        vector<int> ans(n);
//        vector<int> lrg(n);
//        for(int i=0; i<n; i++){
//         ans[i]=arr[i];
//        }
//        sort(ans.begin(), ans.end());
//        ans.erase(unique(ans.begin(), ans.end()), ans.end());
//        for(int i=0; i<n; i++){
//             for(int j=0; j<ans.size(); j++){
//                 if(ans[j]==arr[i]){
//                     lrg[i]=j+1;
//                     break;
//                 }
//             }
//         }
//         return lrg;
//     }
// };


class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans = arr;
        vector<int> lrg(n);

        // Sort and remove duplicates
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        // Find rank of each element
        for(int i = 0; i < n; i++) {
            int j = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();
            lrg[i] = j + 1;
        }

        return lrg;
    }
};