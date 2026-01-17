class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
       
        for(int i=0;i<n-1; i++){
            for(int j=i+1;j<n; j++){
                swap(matrix[j][i], matrix[i][j]);            }
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        return;

        
    }

    void rotate1(vector<vector<int>>& matrix) {
         int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> mat(r,vector<int>(r,0));
       
        for(int i=0;i<r; i++){
            for(int j=0;j<c; j++){
                mat[i][j]=matrix[i][j];
            }
        }

        for(int i=0; i<r; i++){
            for(int j=r-1; j>=0; j--){
                matrix[i][r-j-1] = mat[j][i]; 
            }
        }

        
    }
};