class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int> temp;
        if(n<2 || k==n) return;
        if(k>n){
            k= k%n;
        }
        
        for(int i=n-k; i<n ;i++ ){
            temp.push_back(arr[i]);
        }
        for(int i=0 ; i<n-k; i++){
            temp.push_back(arr[i]);
        }
        for(int i=0 ;i<n ; i++)
            arr[i] = temp[i];
        }   
    
};