class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int lky=0;
        for(int i=0; i<n; i++){
            int co=0;
            for(int j=0; j<n; j++){
                if(arr[i]==arr[j]){
                    co++;
                }
            }
            if(arr[i]==co && lky<co){
                lky=co;
            }
        }
        if(lky>0){
            return lky;
        }
        return -1;
    }
};