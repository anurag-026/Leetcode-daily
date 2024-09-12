class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=0;
        for(int i=0; i<words.size(); i++){
            int j=0;
            for(j; j<words[i].size(); j++){
                if(allowed.find(words[i][j]) ==  string::npos){
                    break;
                }
            }
            if(j == words[i].size()) n++;
        }
        return n;
    }
};