class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int numsLength = nums.size();
        int i = 0;
        while (i < numsLength) {
            long valAtI = (long)nums[i] - 1;
            bool belongsInRange = valAtI >= 0 && valAtI < numsLength;
            if (belongsInRange && nums[i] != nums[valAtI]) {
                swap(nums[i], nums[valAtI]);
            } else {
                i++;
            }
        }
        for (int x = 0; x < numsLength; x++) {
            if (x + 1 != nums[x]) {
                return x + 1;
            }
        }
        return numsLength + 1;
    }
};