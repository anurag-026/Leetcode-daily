class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n= nums.size() ;
        vector<int> arr(n);
        arr[n-1] = nums[n-1];

        for(int i=n-2; i>=0; i-- ){
            if(nums[i] >= arr[i+1]){
                arr[i] = nums[i];
            }
            else{
                arr[i] =arr[i+1];
            }
        }
        int l=0, r=1 ,ans =0;
        while( l<n && r<n && l<=r  ){
            if(l==r) {
                r++;
            }
            else if(nums[l] <= arr[r]){
                r++;
                ans = max(ans, r-l);
            }
            else{
                l++;
            }

        }
        if(ans ==0) return 0;

        return ans-1;
    }
};