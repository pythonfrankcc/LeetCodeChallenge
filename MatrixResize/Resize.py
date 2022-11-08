class Solution(object):
    def matrixReshape(self, mat, r, c):
        """
        :type mat: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        if len(mat) * len(mat[0]) != r*c:
            return mat;
        #create a list of lists fo what is going to hold the new matrix
        ans = [[0 for i in range (c)] for i in range(r)]
        filler = 0
        while filler < r*c:
            ans[filler // c][ filler % c] =  mat[filler // len(mat[0])][filler % len(mat[0])]


#solution from a fellow leetcode, quite intuitive for beginners
class Solution(object):
    def matrixReshape(self, mat, r, c):
        """
        :type mat: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        flatten = []
        new_mat = []
        for row in mat:
            for num in row:
                flatten.append(num)
                
        if r * c != len(flatten):   # when given parameters is NOT possible and legal
            return mat
        else:
            for row_index in range(r):
                new_mat.append(flatten[row_index * c : row_index * c + c])
            return new_mat

https://leetcode.com/problems/reshape-the-matrix/discuss/2046840/Python-Intuitive-%2B-Direct-for-Beginners-with-Illustrations