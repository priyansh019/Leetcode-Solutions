class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0; i < n; i++) {
            vector<int> row(n+1, 0);
            vector<int> col(n+1, 0);

            for(int j = 0; j < n; j++) {
                int a = matrix[i][j];
                int b = matrix[j][i];

                if(a < 1 || a > n || b < 1 || b > n) {
                    return false;
                }

                if(row[a] == 1 || col[b] == 1) {
                    return false;
                }

                row[a] = 1;
                col[b] = 1;
            }
        }

        return true;
    }
};