class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        int i = matrix.size() - 1;
        int j = matrix[0].size() - 1;
        if(target>matrix[i][j] || target<matrix[0][0]) return false;
        int x = 0;
        int y = j;
        while (x<=i && y>=0)
        {
            if(target == matrix[x][y]) return true;
            else if (target <matrix[x][y])
            {
                y--;
            }
            else
            {
                x++;
            }
        }
        return false;
    }
};

//binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int l = 0;
        int r = row * col - 1;

        while(l <=r ){
            int mid = l + (r-l)/2;
            int val = matrix[mid/col][mid%col];
            if(val == target) return true;
            if(val > target){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }

        return false;
        
    }
};