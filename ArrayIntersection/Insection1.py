class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1Size = len(nums1)
        nums2Size = len(nums2)
        nums3 = []
        bigger = max(nums1Size,nums2Size)
        if bigger == nums1Size and nums1Size != nums2Size:
            set2 = set(nums2)
            for i in set2:
                count1 = nums2.count(i)
                count2 = nums1.count(i)
                minValue = min(count2,count1)
                for j in range (minValue):
                    nums3.append(i)
        if bigger == nums2Size and nums1Size != nums2Size:
            set1 = set(nums1)
            for i in set1:
                count1 = nums2.count(i)
                count2 = nums1.count(i)
                minValue = min(count2,count1)
                for j in range (minValue):
                    nums3.append(i)
        if nums1Size == nums2Size:
            for i in range(nums1Size):
                if nums1[i] in nums2:
                    nums3.append(nums1[i])
        return nums3