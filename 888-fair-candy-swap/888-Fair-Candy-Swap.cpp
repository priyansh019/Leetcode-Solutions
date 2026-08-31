class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n=aliceSizes.size();
        int m=bobSizes.size();
        int atotal=0, btotal=0;
        // vector<int> answer;
        for(int i=0; i<n; i++){
            atotal+=aliceSizes[i];
        }
        for(int i=0; i<m; i++){
            btotal+=bobSizes[i];
        }
        int diff=(btotal-atotal)/2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(bobSizes[j]-aliceSizes[i]==diff) {
                    // answer.push_back(aliceSizes[i]);
                    // answer.push_back(bobSizes[j]);
                    return{aliceSizes[i], bobSizes[j]};
                }
            }
        }
        return {};
    }
};