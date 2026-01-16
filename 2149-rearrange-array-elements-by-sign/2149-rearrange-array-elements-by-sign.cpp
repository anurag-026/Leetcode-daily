class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos=0,neg=1;
        vector<int> ans(n);
        for(int i=0;i<n; i++){
            if(nums[i]> 0 && pos<n) {
                ans[pos] = nums[i];
                pos+=2;
            }
            if( nums[i] <0 && neg<n ){
                ans[neg] =nums[i];
                neg+=2;
            }
        } 
        return ans;
    }

      vector<int> rearrangeArray1(vector<int>& nums) {
        int n=nums.size();
        vector<int> pnum;
        vector<int> nnum;
        vector<int> ans;

        for(int i=0; i<n ; i++){
            if(nums[i] > 0){
                pnum.push_back(nums[i]);

            }else{
                nnum.push_back(nums[i]);
            }
        }
        for(int i=0; i<pnum.size(); i++){
            ans.push_back(pnum[i]);
            ans.push_back(nnum[i]);
        }
        return ans;
    }

};