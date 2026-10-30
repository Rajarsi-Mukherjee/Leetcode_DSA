class Solution:
    def peakValleyDifference(self, nums: list[int]) -> int:
        p=0
        v=0
        diff=0
        for i in range(1,len(nums)-1):
            if nums[i] > nums[i - 1] and nums[i] > nums[i + 1]:
                p=p+nums[i]
            if nums[i] < nums[i - 1] and nums[i] < nums[i +1]:
                v=v+nums[i]
        diff=p-v
        return diff
        