class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> v(n);
        int min=prices[0];
        for(int i=0; i<n; i++){
            v[i] = prices[i]-min;
            if(prices[i] <min){
                min=prices[i];
            }
        }
        return *max_element(v.begin(), v.end());

    }
};