class Solution {
    public:
    bool isSubsequence(string s, string t) {
        int n= s.length();
        int m= t.length();
        int i= 0;
        for(int j=0; j< m; j++){
            if(i == n) return true; 
            if(t.at(j) == s.at(i)){ 
                i++;
            }
        }
        return i == n;
    }
};