class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> track((n+1) *n);
        int dup, sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                if (track[grid[i][j]] == 1) {
                    dup = grid[i][j];
                } else {
                    track[grid[i][j]] = 1;
                }
            }
        }
        n= n*n;
        int total = n * (n + 1) / 2;
        int missing = total - sum + dup;
        return {dup, missing};
    }
};
