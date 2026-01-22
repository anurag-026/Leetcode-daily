class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int k = -1, minSum = INT_MAX , n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            if (minSum > nums[i] + nums[i + 1]) {
                k = i;
                minSum = nums[i] + nums[i + 1];
            }
        }
        return k;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        int n = nums.size();
        while (!is_sorted(begin(nums), end(nums))) {
            int k = minPairSum(nums);
            nums[k] = nums[k] + nums[k + 1];
            nums.erase(begin(nums) + k + 1);
            count++;
        }

        return count;
    }
};