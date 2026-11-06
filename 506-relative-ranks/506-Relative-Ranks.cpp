class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> s;
        vector<int> ans = score;

        sort(ans.begin(), ans.end());
        int n = ans.size();

        for(int i = 0; i < n; i++) {
            if(score[i] == ans[n-1])
                s.push_back("Gold Medal");

            else if(n >= 2 && score[i] == ans[n-2])
                s.push_back("Silver Medal");

            else if(n >= 3 && score[i] == ans[n-3])
                s.push_back("Bronze Medal");

            else {
                int rank = 1;
                for(int j = 0; j < n; j++) {
                    if(score[i] == ans[j])
                        rank = n-j;
                }
                s.push_back(to_string(rank));
            }
        }

        return s;
    }
};