void setZeros(vector<vector<int>> &matrix)
{
    bool isZero = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0;i<rows;i++){
        if(matrix[i][0] == 0) isZero = 1;
        for(int j = 1;j<cols;j++){
            if(matrix[i][j] == 0){
                matrix[0][j] = matrix[i][0] = 0;
            }
        }
    }
    for(int i = rows-1;i>=0;i--){
        for(int j = cols-1;j>=1;j--){
            if(matrix[i][0] == 0 || matrix[0][j] == 0) 
                matrix[i][j] = 0;
        }
        if(isZero) matrix[i][0] = 0;
    }
}
