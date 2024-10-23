class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        if (n < 3)
        {
            return maxi;
        }

        int firstMax = maxi;
        int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
        bool count1 = false;
        bool count2 = false;

        for (int i = 0; i < n; i++)
        {
            if (secondMax <= nums[i] && nums[i] != firstMax)
            {
                secondMax = nums[i];
                count1 = true;
            }
        }

        if (!count1)
        {
            return firstMax;
        }

        for (int i = 0; i < n; i++)
        {
            if (thirdMax <= nums[i] && nums[i] != firstMax && nums[i] != secondMax)
            {
                thirdMax = nums[i];
                count2 = true;
            }
        }

        if (count2)
        {
            return thirdMax;
        }
        return firstMax;
    }
};