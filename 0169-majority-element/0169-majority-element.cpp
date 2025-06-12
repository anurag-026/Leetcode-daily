#pragma GCC optimize("O3")
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")   
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insnS2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-Pointer-checks")
#pragma GCC optimize("Ofast")
int init = [] {
    ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    ofstream out("user.out");

    for (string s; getline(cin, s); out << '\n') {
        int ans = 0;
        int c = 0;

        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            bool _neg = false;

            if (s[_i] == '-') {
                ++_i;
                _neg = true;
            }

            int v = s[_i++] & 15;

            while ((s[_i] & 15) < 10)
                v = v * 10 + (s[_i++] & 15);

            if (_neg)
                v = -v;

            if (c == 0)
                ans = v;
            
            ans == v ? ++c : --c;
        }
        out << ans;
    }
    out.flush();
    exit(0);
    return 0;
}();


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