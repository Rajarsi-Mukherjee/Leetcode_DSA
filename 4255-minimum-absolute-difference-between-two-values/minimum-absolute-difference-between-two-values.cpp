class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int dis=0;
        int mindis=INT_MAX;
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]==1 && nums[j]==2 || nums[i]==2 && nums[j]==1){
                    dis=abs(i-j);
                    if(mindis> dis){
                        ans=dis;
                        mindis=dis;
                    }
                }
            }
        }
        
      return ans;
    }
};