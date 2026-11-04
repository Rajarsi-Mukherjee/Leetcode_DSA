class Solution:
    def minMergedInteger(self, nums: list[int]) -> int:
     str_arr=[]
     for i in nums:
        str_arr.append(str(i)) 
     ans=float('inf')
     for i in range(0,len(str_arr)-1,2):
        c=str_arr[i] + str_arr[i+1]
        num=int(c)
        ans=min(ans,num)
     return ans