class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        sort(nums.begin() , nums.end());
        int maxi=1,cnt=1,prev= nums[0];

        for(int i=1; i<n; i++){
            if(prev==nums[i]) continue;
            if(prev==nums[i]-1){
                cnt++;
                maxi=max(cnt,maxi);
            }else{
                cnt=1;
                
            }
            prev=nums[i];
        }
        return maxi;
    }
};