class Solution {
public:

    vector<int> DecToBin(int n){
        vector<int> ans;
        while(n>0){ 
            ans.push_back(n%2);
            n=n/2;
        }
        int l = ans.size();
        for(int i=0; i< l%4; i++){
            ans.push_back(0);
        }
        
        return ans;
    }

    int BinToDec(vector<int> v){
        int ans=0;
        //reverse(v.begin(), v.end());
        for(int i=0; i<v.size() ; i++ ){
            ans += v[i]*pow(2,i);
        }
        return ans;
        
    }

    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            if (num == 2) {
                ans.push_back(-1);
                continue;
            }

            vector<int> nBin = DecToBin(num);

            for(int i=0; i<nBin.size(); i++){
                if(nBin[i] ==0){
                    nBin[i-1] =0; 
                    int n = BinToDec(nBin);
                    ans.push_back(n);
                    break;
                }
            }
            
        }

        return ans;
    }
};