class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r= matrix.size(), c= matrix[0].size();
        vector<int> r0;
        vector<int> c0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j] ==0) {
                    r0.push_back(i);
                    c0.push_back(j);
                }
            }
        }
         
        for(int it:r0){
            for(int j=0; j<c; j++){
                matrix[it][j] =0;
            }
            
        } 
        for(int it:c0){
            for(int j=0; j<r; j++){
                matrix[j][it] =0;
            }
            
        }     
    }
};