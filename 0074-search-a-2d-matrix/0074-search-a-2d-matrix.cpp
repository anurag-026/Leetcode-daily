class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int r = 0;

        // if (m == 0 || n == 0 ||
        //     (m == 1 && n == 1 && target != matrix[m - 1][n - 1]))
        //     return 0;

        for (int i = 0; i < m; i++) {
            if (matrix[i][0] > target) {
                r = i - 1;
                break;
            } else {
                r = i;
            }
            if (matrix[i][0] == target) {
                return 1;
            }
        }
        if (r < 0)
            return 0;
        for (int j = 0; j < n; j++) {
            if (matrix[r][j] == target)
                return 1;
        }
        return 0;
    }
};