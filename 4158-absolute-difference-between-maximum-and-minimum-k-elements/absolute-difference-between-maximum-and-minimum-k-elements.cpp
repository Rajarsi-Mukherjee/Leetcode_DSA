class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int diff;
        sort(nums.begin(),nums.end());
        int maxsum=0;
        int minsum=0;
        for(int i=0;i<k;i++){
            minsum+=nums[i];
        }
        for(int i=n-k;i<n;i++){
            maxsum+=nums[i];
        }
       diff=abs(maxsum-minsum);
       return diff;
    }
};