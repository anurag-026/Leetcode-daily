class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int max =0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
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