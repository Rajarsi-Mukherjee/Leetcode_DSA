class Solution {
public:
    int calculatenthday(string date){
        int day=stoi(date.substr(3,2));
        int month=stoi(date.substr(0,2));
       int daymonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
       int noday=day;
       for(int i=0;i<month-1;i++){
          noday+=daymonth[i];
       }
       return noday;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int start=max(calculatenthday(arriveAlice),calculatenthday(arriveBob));
        int end=min(calculatenthday(leaveAlice),calculatenthday(leaveBob));
        if(start>end) return 0;
        return end-start+1;
    }
};