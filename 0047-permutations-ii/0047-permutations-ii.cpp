class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        set<vector<int>> ans ;
        do{
            //sort(nums.begin() , nums.end() );
            ans.insert(nums);
        }while(next_permutation( nums.begin() , nums.end() ));
        vector<vector<int>> res(ans.begin() , ans.end());
        return res;
    }
};