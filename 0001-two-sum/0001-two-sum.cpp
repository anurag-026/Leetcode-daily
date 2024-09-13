class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> v;
        for(int i=0; i < nums.size(); i++){
            int extra = target - nums[i];
            if(mpp.find( target - nums[i] ) != mpp.end()){
                return {mpp[extra] , i};
            }
            mpp[nums[i]] = i;
        }
        return {0,1};
    }
};