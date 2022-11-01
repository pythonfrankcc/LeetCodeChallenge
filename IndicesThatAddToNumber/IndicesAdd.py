class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numtoindexmap = {}
        for num1_index, num1 in enumerate(nums):
            num2 = target - num1
            try:
                num2_index = numtoindexmap[num2]
            except KeyError:
                numtoindexmap[num1] = num1_index
            else:
                return tuple(sorted([num1_index, num2_index]))
                
        