class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int mxp = 0;
        for(int i=0; i<n; i++){
            if(prices[i]<min){
                min = prices[i];
            }
            int pft = prices[i]-min;
            if(pft>mxp){
                mxp = pft;
            }
        }
        return mxp;
    }
};