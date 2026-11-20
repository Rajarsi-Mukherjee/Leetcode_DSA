# class Solution:
#     def sortedSquares(self, nums: list[int]) -> list[int]:
#         neg=[]
#         pos=[]
#         n=len(nums)
#         for i in range(n):
#             if nums[i] <0:
#                 neg.append(nums[i]** 2)
#             else:
#                 pos.append(nums[i] ** 2)
#         neg.sort()
#         i=len(neg)-1
#         j=len(pos)-1
#         k=len(neg) + len(pos) -1
#         while i>=0 and j>=0:
#             if pos[j]> neg[i]:
#                 nums[k]=pos[j]
#                 j=j-1
#                 k=k-1
#             else:
#                 nums[k]=neg[i]
#                 i=i-1
#                 k=k-1
#         while j>=0:
#             nums[k]=pos[j]
#             j=j-1
#             k=k-1
#         while i>=0:
#             nums[k]=neg[i]
#             k=k-1
#             i=i-1
#         return nums
        


        






class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        n=len(nums)
        ans=[0]*n
        left=0
        right=n-1
        k=n-1
        while left<=right:
            if abs(nums[left]) > abs(nums[right]):
                ans[k]= abs(nums[left]) * abs(nums[left])
                left=left+1
            else:
                ans[k]=abs(nums[right]) * abs(nums[right])
                right=right-1
            k=k-1
        return ans
        