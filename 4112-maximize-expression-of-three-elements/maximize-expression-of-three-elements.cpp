class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
       int n=nums.size();
        int l=INT_MAX; 
       int fh=INT_MIN;
       int sh=INT_MIN;
       int sum=0;
       for(int i=0;i<n;i++){
         if(fh<=nums[i]){
            sh=fh;
            fh=nums[i];
         }
         else if(fh > nums[i] && sh<= nums[i]){
              sh=nums[i];
         }

       }
    
       for(int i=0;i<n;i++){
           l=min(l,nums[i]);
       }
       sum=fh+sh-(l);
       return sum;  
    }
};

// class Solution {
// public:
//     int maximizeExpressionOfThree(vector<int>& nums) {
//         int n=nums.size();
//       sort(nums.begin(),nums.end());
//       int fh=nums[n-1];
//       int sh=nums[n-2];
//       int l=nums[0];
//       return (fh+sh)-(l) ; 
//     }
// };