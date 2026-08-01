class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;  //top row
        int bottom= m-1; //bottom row
        int left=0; //left column
        int right=n-1;  //right column
        while(left<=right && top<=bottom){
            //left to right
            for(int i=left;i<=right;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            //top to bottom
            for(int i=top;i<=bottom;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            //right to left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return v;
    }
};