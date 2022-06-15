class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dict_ = {}
        for i in range(len(nums)):
            if((target-nums[i]) in dict_):
                return [i,dict_[target-nums[i]]]
            else:
                dict_[nums[i]] = i