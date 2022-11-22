class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if len(matrix) == 0 or len(matrix[0]) == 0:
            return False
        i = len(matrix) - 1
        j = len(matrix[0]) -1
        if target>matrix[i][j] or target<matrix[0][0]:
            return False
        x = 0
        y = j
        while x<=i and y>=0:
            if target == matrix[x][y]:
                return True
            elif target < matrix[x][y]:
                y -= 1
            else:
                x += 1
        return False
        