class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> nums;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                nums.push_back(grid[i][j]);
            }
        }

        int n=nums.size();
        vector<int> v(n+1, 0);
        int repeatedNum, sum=0;
        for(int i=0; i<n;i++){
            if(v[nums[i]] >0){
                repeatedNum = nums[i];
            }
            sum+=nums[i];
            v[nums[i]]++;
        }
        int missingNum = (n*(n+1)/2)-sum+repeatedNum;
        return {repeatedNum, missingNum}; 
    }
};