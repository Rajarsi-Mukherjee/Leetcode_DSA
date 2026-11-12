# class Solution:
#     def twoSum(self, nums: list[int], target: int) -> list[int]:
#         for i in range(len(nums)):
#             diff=target-nums[i]
#             for j in range(len(nums)):
#                 if i==j:
#                  continue
#                 if(diff==nums[j]):
#                     return [i,j]
                 




        





class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp={}
        for i,num in enumerate(nums):
          diff=target-num
          if diff in mp:
            return [i,mp[diff]]
          mp[num]=i
        