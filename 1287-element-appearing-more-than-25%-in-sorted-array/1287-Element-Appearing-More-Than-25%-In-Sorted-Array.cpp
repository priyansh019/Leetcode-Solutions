class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int m=0, co=0, co1=0;
        for(int i=0; i<n; i++){
            co=0;
            for(int j=0; j<n; j++){
                if(arr[i]==arr[j]){
                    co++;
                }
                if(co1<co){
                    co1=co;
                    m=arr[i];
                }
            }
        }
        return m;
    }
};