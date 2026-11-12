class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
      n=len(nums)
      inc_len=1
      dec_len=1
      max_inc=1
      max_dec=1
      for i in range(1,n):
        if nums[i]> nums[i-1]:
           inc_len+=1
        else:
            inc_len=1
        if nums[i] <nums[i-1]:
            dec_len+=1
        else:
            dec_len=1
        max_inc=max(max_inc,inc_len)
        max_dec=max(max_dec,dec_len)
      return max(max_inc,max_dec)  