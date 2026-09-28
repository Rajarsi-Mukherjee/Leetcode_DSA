class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int highest=0;
        for(int i=0;i<n;i++){
              if(s[i]=='('){
                count++;
                highest=max(highest,count);
              }
              else if(s[i]==')'){
                count--;
              }
        }
        return highest;
    }
};