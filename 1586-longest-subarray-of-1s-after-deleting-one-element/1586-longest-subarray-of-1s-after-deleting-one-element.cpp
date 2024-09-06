class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int z = 0;
        int lw = 0;
        int p1 = 0;

        for (int i = 0; i < nums.size(); ++i) {
            z += (nums[i] == 0);

            while (z > 1) {
                z -= (nums[p1] == 0);
                p1++;
            }

            lw = max(lw, i - p1);
        }

        return lw;
    }
};