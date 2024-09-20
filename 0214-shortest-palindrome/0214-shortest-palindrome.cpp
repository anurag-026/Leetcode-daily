class Solution {
public:
    string shortestPalindrome(string s) {
        int count = kmp(string(s.rbegin(), s.rend()), s);
        return string(s.rbegin(), s.rend()).substr(0, s.length() - count) + s;
    }

 
    int kmp(const string &txt, const string &patt) {
        string str2 = patt + '#' + txt;
        vector<int> pi(str2.length(), 0);
        int i = 1, k = 0;
        while (i < str2.length()) {
            if (str2[i] == str2[k]) {
                k++;
                pi[i] = k;
                i++;
            } else {
                if (k > 0) {
                    k = pi[k - 1];
                } else {
                    pi[i] = 0;
                    i++;
                }
            }
        }
        return pi.back();
    }
};