class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n=nums.size();
         vector<int>ans;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int maxi=INT_MIN;
       for(auto it: freq){
          maxi=max(maxi,it.second);
       }
       for(int i=0;i<maxi;i++){
         for(auto &it : freq){
         if(it.second> 0){
            ans.push_back(it.first);
            it.second--;
         }
       }
       }
       return ans;
    }
};