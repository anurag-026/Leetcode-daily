class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest_sum = INT_MAX / 2;
        
        for (int i = 0; i < nums.size() - 2; ++i) {
            for (int j = i + 1; j < nums.size() - 1; ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    int current_sum = nums[i] + nums[j] + nums[k];
                    if (abs(current_sum - target) < abs(closest_sum - target)) {
                        closest_sum = current_sum;
                    }
                }
            }
        }
        
        return closest_sum;
    }
};