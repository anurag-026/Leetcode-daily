class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0,x;

        for(int i=0; i<n ; i++){
            if(c==0){
                x=nums[i];
                c++;
            }
            else if(x == nums[i] ){
                c++;
            }else{
                c--;
                
            }
        }

        return x;

    }
};