class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //int maxi = *max_element(nums.begin(), nums.end());
        int max =0,maxi=0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(maxi<nums[i]){
                maxi =nums[i];
                cnt=0; max =0;
            }

            if( nums[i] == maxi ){
                cnt++;
                max = max>cnt? max:cnt;
            }
            if(nums[i] != maxi){
                cnt =0;
            }
        }
        return max;
    }
};