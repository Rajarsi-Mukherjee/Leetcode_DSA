class Solution:
    def minMoves(self, nums: list[int]) -> int:
     nums.sort()  
     n=len(nums)
     target=nums[0]
     s=0
     for i in range(1,n):
        diff=nums[i]-target
        s=s+diff
     return s

