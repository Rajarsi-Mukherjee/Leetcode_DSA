class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if( freq[nums[i]]==3 && (nums[i]==nums[j] && nums[j]==nums[k]) && (j-i)==(k-j)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};