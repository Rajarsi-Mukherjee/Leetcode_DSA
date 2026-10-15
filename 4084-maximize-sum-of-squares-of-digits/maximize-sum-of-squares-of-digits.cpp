
// // class Solution {
// // public:
// //     string maxSumOfSquares(int num, int sum) {
// //         int maxsum=-1;
// //         int start=1;
// //         if(num==1) return "";
// //         for(int i=1;i<num;i++){
// //             start*=10;
// //         }
// //         int end=start*10-1;
// //         for(int i=start;i<=end;i++){
// //             int num=i;
// //             int s=0;
// //             while(num>0){
// //                 int d=num%10;
// //                 s+=d;
// //                 num=num/10;
// //             }
// //             int ss=1;
// //             int ans=0;
// //             if(s==sum){
// //                int num1=i;
// //                int res=0;
// //                while(num1>0){
// //                  int dg=num1%10;
// //                  ss=dg*dg;
// //                  ans+=ss;
// //                  num1=num1/10;
// //                }
// //                 if(maxsum<ans){
// //                     maxsum=ans;
// //                     res=i;
// //                 }
// //             }
// //         }
// //         return to_string(res);
// //     }
// // };



// class Solution {
// public:
//     string maxSumOfSquares(int num, int sum) {
//        int maxn=-1;
//        int start=1;
//        int ans=-1;
//        for(int i=1;i<num;i++){
//         start*=10;
//        } 
//        int end=start*10-1;
//        for(int i=start;i<=end;i++){
//          int num=i;
//          int s=0;
//          while(num>0){
//             int d=num%10;
//             s+=d;
//             num=num/10;
//          }
//          if(s==sum){
//             int ss=0;
//             int num1=i;
//             while(num1>0){
//                 int d1=num1%10;
//                 int dgs=d1*d1;
//                 ss+=dgs;
//                 num1=num1/10;
//             }
//                 if(maxn<ss || (maxn==ss && i>ans)){
//                     maxn=ss;
//                     ans=i;
//                 }
//          }
//        }
//        if(ans==-1) return "";
//        return to_string(ans);
//     }
// };



class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int nines=sum/9;
        int rem=sum%9;
        if(sum> num*9) return "";
        string res(nines,'9');
        if(rem>0){
            res.push_back(char(rem + '0'));
        }
            res.append(num-res.size(),'0');
        
        return res;
    }
};