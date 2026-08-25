class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size(), sum=0, total=0, co=0, trgt=0;
        for(int i=0; i<n; i++){
            total+=arr[i];
        }
        if(total%3!=0){
            return false;
        }
        trgt = total/3;
        for(int i=0; i<n-1; i++){
            sum += arr[i];
            if(sum==trgt){
                co++;
                sum=0;
                if(co==2){
                    return true;
                }
            }
        }
        // if(co==3){
        //     return true;
        // } can't use co==3 due to last part will be left 
        //so co==2
        // else return false;
        return false;
    }
};