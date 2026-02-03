class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0, n= nums.size();
        while(i<n-1){
            if(nums[i+1] >nums[i]){
                i++;
            }else{
                break;
            }
        }
        if(i==0 || i==n-1) return 0;
        while(i<n-1){
            if(nums[i+1] < nums[i]){
                i++;
            }else{
                break;
            }
        }
         if(i==0 || i==n-1) return 0;
        while(i<n-1){
            if(nums[i+1] > nums[i]){
                i++;
            }else{
                break;
            }
        }
        if(i < n-1){
            return 0;
        }
        return 1;

    }
};