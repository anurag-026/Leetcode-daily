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
        int l = 0, r = m - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (matrix[mid][0] <= target && matrix[mid].back() >= target) {
                // will  execute only once
                return bS(matrix[mid], target);
            } else if (matrix[mid][0] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        // TC <= O( log(m) + log(n)) --> 2 binary searchs
        return false;
    }
};