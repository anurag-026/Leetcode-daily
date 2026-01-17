class Solution {
public:
    bool bS(vector<int> v, int target) {
        int l = 0, r = v.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (v[mid] == target) {
                return true;
            } else if (v[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {

            if (matrix[i][0] <= target && matrix[i].back() >= target) {
                // will  execute only once
                return bS(matrix[i], target);
            }
        }
        // TC <= O( m + log(n))
        return 0;
    }
};