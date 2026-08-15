class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int counta = 0;
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            int x = nums[i];
            while(x>0){
                x = x/10;
                counta++;
            }
            temp[i] = counta;
            counta = 0;
        }
        for(int i=0; i<n; i++){
            if(temp[i]%2==0){
                count++;
            }
        }
        return count;
    }
};