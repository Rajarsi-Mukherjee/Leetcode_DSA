# class Solution:
#     def removeDuplicates(self, nums: list[int]) -> int:
#         s=set()
#         for i in range(len(nums)):
#             s.add(nums[i])
#         l=len(s)
#         rem=len(nums)-l
#         ans=sorted(s)
#         while rem>0:
#             ans.append('_')
#             rem=rem-1
#         nums[:]=ans
#         return l
        



class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        ans=[nums[0]]
        n=len(nums)
        i=0
        j=1
        while j<n:
            if nums[i]==nums[j]:
            
                j=j+1
            else:
                i=j
                j=j+1
                ans.append(nums[i])
        l=len(ans)
        rem=n-l
        while rem>0:
            ans.append('_')
            rem=rem-1
        nums[:]=ans
        return l


        