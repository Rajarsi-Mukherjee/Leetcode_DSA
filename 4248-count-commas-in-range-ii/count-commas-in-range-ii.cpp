class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        int comma=1;
        long long  start=1000;
        if(n<1000) return 0;
        while(start<=n){
            long long end=min(n,start*1000-1);
            ans+=(end-start+1)*comma;
            start=start*1000;
            comma++;
        }
  return ans;
    }
};