class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        int n=nums.size();
        
        for(int i=0; i<n; i++){
           
            for(int j=i+1; j<n; j++){
                if(nums[i] +nums[j] ==target ){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
           if(mpp.find(target-nums[i]) != mpp.end() ){
                return {i, mpp[target-nums[i]]}; 
           }
           mpp[nums[i]]=i;
        }
        return {0,0};
    }

};