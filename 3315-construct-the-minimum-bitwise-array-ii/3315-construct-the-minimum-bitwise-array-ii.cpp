class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            if (num == 2) {
                ans.push_back(-1);
                continue;
            }

            int result = num;

            for (int bit = 0; bit < 31; bit++) {
                if (num & (1 << bit)) {
                    if (!(num & (1 << (bit + 1)))) {
                        result = num & ~(1 << bit);
                        break;
                    }
                }
            }

            ans.push_back(result);
        }

        return ans;
    }
};