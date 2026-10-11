class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n= nums.size();
         int sum=0;
         int s;
         for(int i=1;i<=n;i++){
            if(n%i==0){
                 s=nums[i-1] * nums[i-1];
                sum+=s;
            }
         }
         return sum;

    }
};