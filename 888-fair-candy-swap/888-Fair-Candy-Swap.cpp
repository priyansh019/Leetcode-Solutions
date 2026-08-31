class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n=aliceSizes.size();
        int m=bobSizes.size();
        int atotal=0, btotal=0;
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
                    return{aliceSizes[i], bobSizes[j]};
                }
            }
        }
        return {};
    }
};