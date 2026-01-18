class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid, int row, int col, int k) {

        int targetSum = 0;
        for (int j = col; j < col + k; j++) {
            targetSum += grid[row][j];
        }

        // Check all rows
        for (int i = row; i < row + k; i++) {
            int rowSum = 0;
            for (int j = col; j < col + k; j++) {
                rowSum += grid[i][j];
            }
            if (rowSum != targetSum)
                return false;
        }

        // Check all columns
        for (int j = col; j < col + k; j++) {
            int colSum = 0;
            for (int i = row; i < row + k; i++) {
                colSum += grid[i][j];
            }
            if (colSum != targetSum)
                return false;
        }

        // Check main diagonal (top-left to bottom-right)
        int diag1Sum = 0;
        for (int i = 0; i < k; i++) {
            diag1Sum += grid[row + i][col + i];
        }
        if (diag1Sum != targetSum)
            return false;

        // Check anti-diagonal (top-right to bottom-left)
        int diag2Sum = 0;
        for (int i = 0; i < k; i++) {
            diag2Sum += grid[row + i][col + k - 1 - i];
        }
        if (diag2Sum != targetSum)
            return false;

        return true;
    }

    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxPossible = min(m, n);

        for (int k = maxPossible; k >= 1; k--) {
            for (int i = 0; i <= m - k; i++) {
                for (int j = 0; j <= n - k; j++) {
                    if (isMagicSquare(grid, i, j, k)) {
                        return k;
                    }
                }
            }
        }

        return 1;
    }
};