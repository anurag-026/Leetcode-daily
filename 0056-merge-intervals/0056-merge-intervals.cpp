class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size(); i++) {

            if (ans.empty() || ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            } else {
                ans.back()[1] = max(intervals[i][1] , ans.back()[1]);
            }
        }
        return ans;
    }

    vector<vector<int>> merge1(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int s = intervals[0][0];
        int e = intervals[0][1];

        vector<vector<int>> ans;
        for (int i = 1; i < intervals.size(); i++) {
            if (e >= intervals[i][0]) {
                e = max(e, intervals[i][1]);
            } else {
                ans.push_back({s, e});
                s = intervals[i][0];
                e = max(e, intervals[i][1]);
            }
        }
        ans.push_back({s, e});
        return ans;
    }
};