#include <vector>
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //defining the ans vector
        vector<vector<int>> ans(r, vector<int>(c));
        //checking if the no of columns with rows is identical and if not return original
        if(mat.size()*mat[0].size()!=r*c) return mat;
        int row = 0;
        int col = 0;
        for(int i{0}; i<mat.size(); i++)
        {
            for(int j{0}; j<mat[i].size();j++)
            {
                ans[row][col] = mat[i][j];
                col++;
                if(col==c)
                {
                    row ++;
                    col = 0;
                }
            }
        }
        return ans;
    }
};