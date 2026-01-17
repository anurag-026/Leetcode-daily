class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            
            if (matrix[i][0] <= target && matrix[i][n - 1] >= target) {
                // will  execute only once
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == target)
                        return 1;
                }
            }
        }
        // TC <= O(m+n)
        return 0;
    }
};