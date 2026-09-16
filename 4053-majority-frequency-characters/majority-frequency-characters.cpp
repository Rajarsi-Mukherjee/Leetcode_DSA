class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int n=s.size();
        string ans="";
        map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        map<int,vector<char>>group;
        for(auto it: freq){
            group[it.second].push_back(it.first);
        }
        int bestsize=0;
        int mostfreq=0;
        for(auto it: group){
            int currentsize=it.second.size();
            int currentfreq=it.first;
            if(currentsize>bestsize ||
               (currentsize==bestsize && currentfreq>mostfreq)){
                  bestsize=currentsize;
                  mostfreq=currentfreq;
               }
        }
        for(char ch : group[mostfreq]){
            ans+=ch;
        }
        return ans;
    }
};