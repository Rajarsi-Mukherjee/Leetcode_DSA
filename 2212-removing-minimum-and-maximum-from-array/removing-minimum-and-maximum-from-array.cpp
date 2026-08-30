class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minind=min_element(begin(nums),end(nums))- begin(nums);
        int maxind=max_element(begin(nums),end(nums))-begin(nums);
        int left=min(minind,maxind);
        int right=max(minind,maxind);
         return  min({left+1+n-right,right+1,n-left});
    }
};