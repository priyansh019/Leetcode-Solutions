class Solution {
public:
    int secondHighest(string s) {
        vector<int> ans;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                ans.push_back(s[i] - '0');
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        if(ans.size() < 2){
            return -1;
        }
        return ans[ans.size() - 2];
    }
};