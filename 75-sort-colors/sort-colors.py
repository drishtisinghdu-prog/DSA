class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        count_0 = nums.count(0)
        count_1 = nums.count(1)
        count_2 = nums.count(2)
        nums[:] = [0] * count_0 + [1] * count_1 + [2] * count_2
        