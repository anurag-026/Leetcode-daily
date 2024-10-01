class Solution {
public:
   string longestCommonPrefix(vector<string> arr) {
        string ms=arr[0];
        
        int n= arr.size();
        
        for(int i=1; i<n; i++){
            if(arr[i].size() < ms.size() ){
                ms = arr[i];
            }
        }
        string temp="";
        int i=0;
        while(i<n){
            temp="";
            string s = arr[i];
            for(int j=0; j<s.size() &&  j<ms.size(); j++){
                //if(s == ms) break;
                if(s[j] == ms[j]){
                    temp= temp+s[j];
                }
                else{
                    break;
                }
                
            }
            if(temp.size() ==0) return "";
            if(temp.size() < ms.size()){
                ms = temp;
            }
            i++;
        }
        return  ms;
        

    }
};