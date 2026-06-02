class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        int ps = intervals[0][0], pe = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (pe >= intervals[i][0]) {
                pe = max(pe, intervals[i][1]);
            } else if (pe < intervals[i][0]) {
                ans.push_back({ps, pe});
                ps = intervals[i][0];
                pe = intervals[i][1];
            }
        }
        ans.push_back({ps, pe});
        return ans;
    }
};