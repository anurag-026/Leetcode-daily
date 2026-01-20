class Solution {
public:
    int reversePairs1(vector<int>& nums) {
        int n = nums.size(), count = 0;
        ;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((long)nums[i] > (long)2 * nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }

    int merge(int low, int mid, int high, vector<int>& nums) {
        int l = low, r = mid + 1;
        long count = 0;
        vector<int> temp;
        
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        while (l <= mid && r <= high) {
            if (nums[l] >= nums[r]) {

                temp.push_back(nums[r]);
                r++;

            } else {
                temp.push_back(nums[l]);
                l++;
            }
        }
        while (l <= mid) {
            temp.push_back(nums[l]);
            l++;
        }
        while (r <= high) {
            temp.push_back(nums[r]);
            r++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
        return count;
    }

    long mergeSort(int low, int high, vector<int>& nums) {
        if (low >= high)
            return 0;

        long count = 0;

        int mid = (low + high) / 2;
        count += mergeSort(low, mid, nums);
        count += mergeSort(mid + 1, high, nums);
        count += merge(low, mid, high, nums);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();

        long count = mergeSort(0, n - 1, nums);
        return (int)count;
    }
};