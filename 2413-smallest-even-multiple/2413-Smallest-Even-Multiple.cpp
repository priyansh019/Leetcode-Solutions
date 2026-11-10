class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i=2; i>0; i++){
            if(i%n==0){
                return i;
            }
            i++;
        }
        return -1;
    }
};