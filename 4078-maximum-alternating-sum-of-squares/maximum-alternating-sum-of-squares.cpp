class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        
        // Sort by absolute value (in ascending order)
        stable_sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        long long oddsum = 0, evensum = 0;

        for (int i = n - 1; i >= n / 2; i--) {
            oddsum += 1LL * nums[i] * nums[i];
        }

        for (int i = 0; i < n / 2; i++) {
            evensum += 1LL * nums[i] * nums[i];
        }

        long long ans = oddsum - evensum;
        return ans;
    }
};
