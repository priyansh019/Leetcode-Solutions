class Solution {
public:
    int countDigits(int num) {
        int co=0;
        int x=num;
        while(x>0){
            int rem=x%10;
            x=x/10;
            if(num%rem==0){
                co++;
            }
        }
        return co;
    }
};