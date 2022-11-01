class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        numsLength=len(nums)
        for i in range(1,numsLength):
            if nums[i] == nums[i-1]:
                return True
        return False