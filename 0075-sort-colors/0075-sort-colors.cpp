class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0, m=0,h=n-1;

        while(m<=h && m<=n-1 && h<=n-1){

             if(nums[m] == 0){
                swap(nums[l] , nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1){
                m++;
            }
            else if (nums[m] == 2){
                swap(nums[h] , nums[m]);
                h--;

            }
        }
    }
};