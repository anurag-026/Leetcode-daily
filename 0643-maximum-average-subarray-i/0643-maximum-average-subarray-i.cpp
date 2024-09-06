class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double maxavg=INT_MIN;
        // for(int i=0; i<nums.size()-k+1; i++){
        //     double avg=INT_MIN, sum=0;
        //     if( i>=1 && nums[i+k-1] < nums[i-1] )continue;
        //     for(int j=0; j<k; j++){
        //         sum+= nums[i+j];
        //     }
             
        //     maxavg = max(maxavg,sum);
        // }
        // return maxavg/k;

                int res = 0;
                double large = 0;
                for(int i = 0;i < k;i++){
                    res += nums[i];
                }
                large = res;
                int Add = k;
                for(int i = 0; Add < nums.size();i++){
                    res -= nums[i];
                    res += nums[Add++];
                    if(large < res) large = res;
                }
                return  large/k;
    }
};