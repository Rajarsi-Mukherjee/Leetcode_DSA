class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       string ans;
       int n=words.size();
       int position;
        for(int i=0;i<n;i++){
           string w=words[i];
           int size=w.size();
           int sum=0;
           for(int j=0;j<size;j++){
             sum+=weights[w[j]-'a'];
           }  
           position=sum%26;
           char ch='z'-position;
           ans+=ch; 
        }
        return ans;
    }
};