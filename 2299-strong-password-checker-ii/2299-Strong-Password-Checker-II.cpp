class Solution {
public:
    bool strongPasswordCheckerII(string password) {

        if(password.size() < 8) return false;

        bool lo = false, up = false;
        bool di = false, sp = false;

        for(int i = 0; i < password.size(); i++) {

            if(password[i] >= 'a' && password[i] <= 'z')
                lo = true;

            else if(password[i] >= 'A' && password[i] <= 'Z')
                up = true;

            else if(password[i] >= '0' && password[i] <= '9')
                di = true;

            else
                sp = true;

            if(i > 0 && password[i] == password[i-1])
                return false;
        }

        return lo && up && di && sp;
    }
};