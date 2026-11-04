class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            int x=i;
            int co=0;
            while(x>0){
                int rem=x%10;
                x=x/10;
                if(rem==0){
                    co++;
                    break;
                }
                if((i%rem)!=0){
                    co++;
                    break;
                }
            }
            if(co==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};