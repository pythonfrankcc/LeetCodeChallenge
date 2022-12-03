class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in nums:
            if nums.count(i)== 1:
                return i


#or we can use counter like so with this being much faster than the above method
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        from collections import Counter
        a = Counter(nums)
        key = [k for k, v in a.items() if v == 1][0]
        #the use of [0] is to select the value from the returned list as the above method returns a list
        return key
