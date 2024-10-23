class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>map;
        int i;
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        vector<int>ans;
        for(i=1;i<=n;i++){
            if(map.find(i)==map.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};