class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        s=set()
        for i in range(len(nums)):
            s.add(nums[i])
        l=len(s)
        rem=len(nums)-l
        ans=sorted(s)
        while rem>0:
            ans.append('_')
            rem=rem-1
        nums[:]=ans
        return l
        