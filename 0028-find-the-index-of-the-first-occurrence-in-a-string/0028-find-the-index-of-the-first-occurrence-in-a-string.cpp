class Solution {
public:
    // int strStr(string a, string b) {
    //    if(a.size()<b.size())return -1;
    //    for(int i=0;i<a.size();i++){
    //     if(a.substr(i,b.size())==b)return i;
    //    }
    //     return -1;
    // }

    int strStr(string a, string b) {
         
        for(int i=0;i<a.size();i++){  
            for(int j=0;j<b.size();j++){
                if(a[i+j]!=b[j])break;
                if(j==b.size()-1)return i;
            }
        }
           
        return -1;
        
    }
};