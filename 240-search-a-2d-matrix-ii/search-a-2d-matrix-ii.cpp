class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
  if( matrix.size() < 1 || matrix[0].size() <1) {
            return false;
        }
        int c = matrix[0].size()-1;
        int row = 0;
        while(c >= 0 && row <= matrix.size()-1) {
            if(target == matrix[row][c]) {
                return true;
            } else if(target < matrix[row][c]) {
                c--;
            } else if(target > matrix[row][c]) {
                row++;
            }
        }
        return false;
    }
};