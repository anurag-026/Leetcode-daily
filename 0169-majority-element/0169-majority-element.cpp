class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=1,x=nums[0];

        for(int i=1; i<n ; i++){
            if(x == nums[i] ){
                c++;
            }else{
                c--;
                if(c==1){
                    x=nums[i];
                }
            }
        }

        return x;

    }
};