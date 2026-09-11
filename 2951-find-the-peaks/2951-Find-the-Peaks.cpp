class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(i!=0 && i!=n-1 && mountain[i]>mountain[i+1] && mountain[i-1]<mountain[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};