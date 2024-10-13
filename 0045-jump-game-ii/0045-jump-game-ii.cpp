class Solution {
public:
    int cnt=0;
    void solve(vector<int>& nums, int n ){
        if(n==1) return;
        for(int i =0; i<n; i++){
            if((n-1-i) <= nums[i] ){
                cnt++;
                solve(nums , i+1);
                break;
            }
        }
    }
    int jump(vector<int>& nums) {
        int n= nums.size();
        solve(nums, n);
        return cnt;
    }
};