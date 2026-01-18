class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int n =s.size();
        for(int i=0; i<n; i++ ){
            unordered_map<char,int> mpp;
            int count=0;
            for(int j=i; j<n; j++ ){
                if(mpp.find(s[j]) != mpp.end() ){
                    break;
                }
                mpp[s[j]]=1;
                count++;
            }
            maxi = max(count, maxi);
        }
        return maxi;
    }
};