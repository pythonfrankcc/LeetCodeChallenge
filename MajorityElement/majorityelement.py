class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        from collections import Counter
        standard_for_greater = len(nums)/2
        a = Counter(nums)
        key = [k for k,v in a.items() if v>standard_for_greater][0]
        return key
        