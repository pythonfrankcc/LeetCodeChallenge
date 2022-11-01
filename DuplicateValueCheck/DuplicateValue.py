#using the list.sort() and sorted(list) in python
#when using the sort.list(), this rearranges the original list
#range() function returns a sequence of numbers, starting from 0 by default and increements by 1(defaultly) and stops at the
#specified number >>range(start, stop, step)
#sorted.list() returns a whole new list
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            for j in range(0, i):
                if nums[i] == nums[j]:
                    return True
        return False