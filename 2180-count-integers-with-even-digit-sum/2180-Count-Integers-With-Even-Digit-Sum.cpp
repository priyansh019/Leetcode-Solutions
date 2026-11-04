class Solution {
public:
    int countEven(int num) {
        int co=0;
        for(int i=1; i<=num; i++){
            int sum=0;
            int x=i;
            while(x>0){
                int rem=x%10;
                x=x/10;
                sum+=rem;
            }
            if(sum%2==0 && sum<=num){
                co++;
            }
        }
        return co;
    }
};