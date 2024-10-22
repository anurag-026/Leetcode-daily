class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        int rs = matrix.size();
        int cs = matrix[0].size();
 
        int r = 0;
        int c = -1;
 
        int dir = 1;
 
        vector<int> result; 
        while (rs > 0 && cs > 0) {
 
            for (int i = 0; i < cs; i++) {
                c += dir;
                result.push_back(matrix[r][c]);
            }
            rs--;
 
            for (int i = 0; i < rs; i++) {
                r += dir;
                result.push_back(matrix[r][c]);
            }
            cs--;
 
            dir *= -1;
        }

        return result;
    }
};