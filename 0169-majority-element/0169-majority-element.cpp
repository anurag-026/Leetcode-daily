class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_ele=nums[0]; 
        int cnt=1;
        for(int i=1; i<nums.size(); i++){
            if(max_ele == nums[i]){
                cnt++;
            }
            else{
                cnt--;
                if(cnt==0){
                    max_ele = nums[i];
                    cnt=1;
                }
            }
        }
        return max_ele;
    }
};