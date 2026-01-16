class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
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