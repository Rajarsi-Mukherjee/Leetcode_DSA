class Solution {
public:
    int minRotations(string s) {
       int n=s.size();
       int clockwise=abs(0-(s[0]-'0'));
       int anticlockwise=10-abs(0-(s[0]-'0'));
       int diff=min(clockwise,anticlockwise);
       int ans=diff;
       int a=0;
       int b=1;
       while(a<b && b<n) {
          int adigit=s[a]-'0';
          int bdigit=s[b]-'0';
          clockwise=abs(adigit-bdigit);
          anticlockwise=10-abs(adigit-bdigit);
          diff=min(clockwise,anticlockwise);
          ans+=diff;
          a++;
          b++;
       }
       return ans;
    }
};