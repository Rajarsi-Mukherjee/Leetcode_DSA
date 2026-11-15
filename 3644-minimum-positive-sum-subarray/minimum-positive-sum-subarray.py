class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
      minisum=float('inf')
      n=len(nums)
      for i in range(n):
        sum=0
        for j in range(i,n):
            sum=sum+nums[j]
            if j-i+1>= l and j-i+1<=r:
                if sum>0:
                    minisum=min(minisum,sum)

                 
                
      if minisum==float('inf'):
            return -1
      return minisum