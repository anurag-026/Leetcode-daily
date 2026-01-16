class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int cp = prices[0];
        int maxp=0;

        for(int i=1; i<n; i++){
            cp= min(cp, prices[i]);
            maxp= max(maxp, prices[i]-cp);
        }
        return maxp;
    }
};