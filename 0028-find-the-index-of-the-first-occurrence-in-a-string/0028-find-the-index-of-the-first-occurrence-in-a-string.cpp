class Solution {
public:
    int strStr(string a, string b) {
       if(a.size()<b.size())return -1;
       for(int i=0;i<a.size();i++){
        if(a.substr(i,b.size())==b)return i;
       }
        return -1;
    }
};