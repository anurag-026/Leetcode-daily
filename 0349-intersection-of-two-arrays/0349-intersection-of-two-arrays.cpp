class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        unordered_set<int>set;
        int n=nums1.size();
        for(auto i:nums2){
            map[i]++;
        }
        for(int i=0;i<n;i++){
            if(map.find(nums1[i])!=map.end()){
                set.insert(nums1[i]);
            }
        }
        vector<int>ans;
        for(auto k:set){
            ans.push_back(k);
        }
        return ans;
    }
};