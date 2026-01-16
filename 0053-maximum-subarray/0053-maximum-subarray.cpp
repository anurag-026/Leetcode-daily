class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        int index=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            maxi = max(sum,maxi);
            if(sum<0){
                sum=0;
                index=i+1;
            }
            
        }
        return maxi;
    }
};