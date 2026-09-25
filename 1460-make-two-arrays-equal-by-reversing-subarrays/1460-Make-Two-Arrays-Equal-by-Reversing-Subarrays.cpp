class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        for(int i = 0; i < n; i++) {
            bool found = false;
            for(int j = 0; j < n; j++) {
                if(target[i] == arr[j]) {
                    arr[j] = -1;
                    found = true;
                    break;
                }
            }
            if(found == false) {
                return false;
            }
        }
        return true;
    }
};