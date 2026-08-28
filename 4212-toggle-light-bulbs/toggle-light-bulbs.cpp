class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<bulbs.size();i++){
            mpp[bulbs[i]]++;
        }
        for(auto it : mpp){
            if((it.second)%2==1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};