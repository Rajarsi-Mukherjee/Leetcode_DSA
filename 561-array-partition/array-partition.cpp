class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        int mini=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i=i+2){
            mini=min(nums[i],nums[i+1]);
            sum+=mini;
        }
        return sum;
    }
};