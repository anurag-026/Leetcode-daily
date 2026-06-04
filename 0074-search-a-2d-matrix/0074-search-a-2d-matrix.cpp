class Solution {
public:
    bool searchMatrix1(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();

        if (n == 0 || m == 0) {
        }
        int row;
        int i = 0, j = n - 1, mid;

        while (i <= j) {
            mid = i + (j - i) / 2;
            if (matrix[mid][0] == target) {
                return true;
            } else if (matrix[mid][0] > target) {
                j = mid - 1;
            } else if (matrix[mid][0] < target) {
                i = mid + 1;
            }
        }
        if (j < 0)
            return false;

        row = j;
        int col;
        i = 0, j = m - 1, mid;

        while (i <= j) {
            mid = i + (j - i) / 2;
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] > target) {
                j = mid - 1;
            } else if (matrix[row][mid] < target) {
                i = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n - 1;
        while (row < m && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            }
            if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};