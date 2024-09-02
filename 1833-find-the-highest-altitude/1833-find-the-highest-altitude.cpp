class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>pref(n+1,0);
        pref[0] = gain[0];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + gain[i];
        }
        return *max_element(pref.begin(), pref.end());
    }
};