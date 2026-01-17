class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(),0);

        for(int i=0; i<nums.size(); i++){
            if(v[nums[i]] != 0){
                return nums[i];
            }
            v[nums[i]] =1;

        } 
        return nums[0];
    }
};