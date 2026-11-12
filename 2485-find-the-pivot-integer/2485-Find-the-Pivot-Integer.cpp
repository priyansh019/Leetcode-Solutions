class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            sum += i;

            int sum1 = 0;

            for(int j = n; j >= i; j--) {
                sum1 += j;
            }
            if(sum == sum1) {
                return i;
            }
        }

        return -1;
    }
};