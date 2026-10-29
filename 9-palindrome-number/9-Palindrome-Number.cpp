class Solution {
public:
    bool isPalindrome(int x) {
        int temp, rem;
        long long rev=0;
        if(x<0){
            return 0;
        }
        temp = x;
        while(x>0){
            rem = x%10;
            rev = (rev*10) + rem;
            x = x/10;
        } 
        if(temp == rev){
            return 1;
        }    
        else
            return 0;
    }
};