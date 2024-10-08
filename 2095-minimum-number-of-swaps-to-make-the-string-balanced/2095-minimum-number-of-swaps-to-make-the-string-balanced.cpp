class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = 0;
        for (auto c:s){
            if( c == '[')
                ans += 1;
            else if(ans > 0)
                ans -= 1;
        }
        return (int)((ans + 1) / 2);
            
    }
};