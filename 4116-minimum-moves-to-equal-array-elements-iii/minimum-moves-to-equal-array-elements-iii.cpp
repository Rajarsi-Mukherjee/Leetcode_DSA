class Solution {
public:
    int minMoves(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int last=nums[n-1];
        int diff;
        for(int i=0;i<=n-1;i++){
         diff=(last-nums[i]);
            count+=diff;
        }
        return count;
    }
};