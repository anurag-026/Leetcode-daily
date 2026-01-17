class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0, c2=0, e1=INT_MIN,e2=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(c1==0 && nums[i] != e2){
                c1++;
                e1=nums[i];
            } else if(c2==0 && nums[i] != e1){
                c2++; 
                e2=nums[i];
            } else if(e1==nums[i]){
                c1++;
            } else if(e2 == nums[i]){
                c2++;
            } else {
                c1--;
                c2--;
            }
        }
        c1=0;c2=0;
        for(int i=0; i<n; i++){
            if(e1 == nums[i]) c1++;
            if(e2==nums[i]) c2++;

        }
        int mini = (int)(n/3) +1;
        vector<int> ans;
        if(c1>=mini) ans.push_back(e1);
        if(c2>=mini) ans.push_back(e2);
        return ans;
    }
};