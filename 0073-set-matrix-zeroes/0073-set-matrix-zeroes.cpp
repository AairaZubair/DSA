class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector <bool> rows(row,false);
        vector <bool> cols(col,false);
        for(int i=0;i<row;i++){
            for(int j =0;j<col;j++){
                if(matrix[i][j]==0){
                    rows[i]=true;
                    cols[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rows[i]== true || cols[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};