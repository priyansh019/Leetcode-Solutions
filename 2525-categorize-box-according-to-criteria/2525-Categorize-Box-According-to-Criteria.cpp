
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool b = false, h = false;

        if(length >= 10000 || width >= 10000 || height >= 10000 ||
           (1LL * length * width * height) >= 1000000000) {
            b = true;
        }

        if(mass >= 100) {
            h = true;
        }

        if(b && h) {
            return "Both";
        }
        if(!b && !h) {
            return "Neither";
        }
        if(b && !h) {
            return "Bulky";
        }
        if(!b && h) {
            return "Heavy";
        }

        return "";
    }
};
