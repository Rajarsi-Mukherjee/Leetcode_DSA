class Solution {
public:
    int findNthDigit(int n) {
        if(n<10) return n;
       else{
          long long digit=1;
       long long start=1;
       long long count=9;
       long long rem=n;
       while(rem > count*digit){
           rem=rem-count*digit;
           digit++;
           start=start*10;
           count=count*10;
       }
       long long acnum=start+(rem-1)/digit;
       long long acind=(rem-1)%digit;
       string s=to_string(acnum);
       return s[acind]-'0';
       }

    }
};