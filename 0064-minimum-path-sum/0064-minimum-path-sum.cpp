class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int nr = grid.size();
        int nc = grid[0].size();

        vector<vector<int>> sum(nr,vector<int>(nc));
        sum[0][0] = grid[0][0];

        for(int i=1;i<nc;i++){
            sum[0][i] = sum[0][i-1]+grid[0][i];
        }
        for(int i=1;i<nr;i++){
            sum[i][0] = sum[i-1][0]+grid[i][0];
        }

        for(int i=1;i<nr;i++){
            for(int j=1;j<nc;j++){
                sum[i][j] = grid[i][j] + min(sum[i][j-1],sum[i-1][j]);
            }
        }
        return sum[nr-1][nc-1];
    }
};