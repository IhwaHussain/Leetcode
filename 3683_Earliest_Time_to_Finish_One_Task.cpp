class Solution {
public:
    int finishTime(vector<int>& times)
    {
        return times[0] + times[1];
    }
    int earliestTime(vector<vector<int>>& tasks) {
        int result = finishTime(tasks[0]);
        for(size_t i = 1; i < tasks.size(); i++)
        {
            result = min(result, finishTime(tasks[i]));
        }
        return result;
    }
};