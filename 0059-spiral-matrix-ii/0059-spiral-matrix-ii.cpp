class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int top=0; //top row
        int bottom=n-1;  //bottom row
        int left=0;  //left column
        int right=n-1;  //right column
        int num=1;
        while(left<=right && top<=bottom){
            //left to right
            for(int i=left;i<=right;i++){
                matrix[top][i]=num++;
            }
            top++;
            //top to bottom
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=num++;
            }
            right--;
            //right to left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=num++;
                }
                bottom--;
            }
            //bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=num++;
                }
                left++;
            }
        }
        return matrix;
    }
};