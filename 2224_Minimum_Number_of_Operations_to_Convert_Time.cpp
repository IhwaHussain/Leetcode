class Solution {
public:
    int convertTime(int currentHour, int currentMinute, int correctHour, int correctMinute)
    {
        if(currentHour > correctHour) return convertTime(currentHour,currentMinute,correctHour + 24, correctMinute);
        if(currentMinute > correctMinute) return convertTime(currentHour,currentMinute,correctHour - 1, correctMinute + 60);
        if(currentHour != correctHour) return convertTime(correctHour,currentMinute,correctHour, correctMinute)+(correctHour - currentHour);
        if(correctMinute - currentMinute > 14) return convertTime(correctHour,currentMinute+15,correctHour, correctMinute) +1;
        if(correctMinute - currentMinute > 4) return convertTime(correctHour,currentMinute+5,correctHour, correctMinute) +1;
        if(correctMinute - currentMinute > 0) return convertTime(correctHour,currentMinute+1,correctHour, correctMinute) +1;
        return 0;
    }
    int convertTime(string current, string correct) {
        int cuHour = stoi(current.substr(0,2));
        int cuMinute = stoi(current.substr(3,2));
        int coHour = stoi(correct.substr(0,2));
        int coMinute = stoi(correct.substr(3,2));
        return convertTime(cuHour,cuMinute,coHour,coMinute);
    }
};
