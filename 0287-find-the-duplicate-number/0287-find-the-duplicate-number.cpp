class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++) {
            if (v[nums[i]] == 1)
                return nums[i];
            v[nums[i]] = 1;
        }
        return 0;
    }

    int findDuplicate1(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return nums[i - 1];
            }
        }
        return 0;
    }
};