class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>presum(n,0);
        vector<int>summ(n,0);
        presum[0]=nums[0];
        summ[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            presum[i]=nums[i]+presum[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            summ[i]=nums[i]+summ[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(presum[i]-nums[i]==summ[i]-nums[i])
            {
                return i;
            }
        }
        return -1;

    }
};