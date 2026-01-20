class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>> dp) {
        if (i == m - 1 && j == n - 1) {
            dp[i][j] = 1;
            return dp[i][j];
        }
        if (i >= m || j >= n) {
            dp[i][j] = 0;
            return dp[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        } else {
            return dp[i][j] =
                       solve(i + 1, j, m, n, dp) + solve(i, j + 1, m, n, dp);
        }
    }

    int uniquePaths1(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        int z = solve(0, 0, m, n, dp);
        return z;
    }

    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r =n-1;
        long long res=1;
        for(int i=1; i<=r; i++){
            res = res*(N-r+i)/i;
        }
         
        return (int)res;
    }
};