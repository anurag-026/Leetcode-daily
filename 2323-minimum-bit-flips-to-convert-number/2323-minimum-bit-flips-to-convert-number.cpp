class Solution {
public:
    // string DecToBin(int n){
    //     if(n==0) return "0"; 
    //     string s="";
    //     while(n != 1){
    //         if(n%2 == 1) s='1'+s;
    //         else s='0'+s;
    //         n/=2;
    //     }
    //     if(n==1) s='1'+s;
    //     return s;
    // }
    int minBitFlips(int start, int goal) {
        // string  a = DecToBin(start);
        // string b= DecToBin(goal);
        // while(a.size() > b.size()){
        //     b='0'+b;
        // }
        // while(a.size() < b.size()){
        //     a='0'+a;
        // }
        // int count=0;
        // for(int i=a.size()-1; i>=0; i--){
        //     if(a[i] != b[i]) count++;
        // }
        // return count;

        int x =start^goal , count=0;
        // string s = DecToBin(x);
        // for(int i=0; i<s.size() ; i++){
        //     if(s[i] == '1') count++;
        // }

        while(x!=0){
            x= x&(x-1);
            count++;
        }
        return count;

    }
};