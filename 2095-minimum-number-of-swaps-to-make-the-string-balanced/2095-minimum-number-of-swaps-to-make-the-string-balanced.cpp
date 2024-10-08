class Solution {
public:
    int minSwaps(string s) {
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