class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> prefixSum(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                prefixSum[i][j] = mat[i - 1][j - 1] + prefixSum[i - 1][j] +
                                  prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
            }
        }

        int maxSide = 0;

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= min(i, j); k++) {
                    int sum = prefixSum[i][j] - prefixSum[i - k][j] -
                              prefixSum[i][j - k] + prefixSum[i - k][j - k];

                    if (sum <= threshold) {
                        maxSide = max(maxSide, k);
                    }
                }
            }
        }

        return maxSide;
    }
};