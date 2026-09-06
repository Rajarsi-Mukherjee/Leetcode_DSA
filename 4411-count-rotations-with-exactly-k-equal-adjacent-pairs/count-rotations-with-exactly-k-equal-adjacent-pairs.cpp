class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
         int ans=0;
        for(int i=0;i<n;i++){
           string r=s.substr(i) + s.substr(0,i);
            int size=r.size();
              int score=0;
            for(int j=0;j<size-1;j++){
                if(r[j]==r[j+1]){
                    score++;
                }
            }
            if(score==k){
                ans++;
            }
        }
        return ans;
    }
};