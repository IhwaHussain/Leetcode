class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long> horSums;
        long currSum = 0;
        long totalSum = 0;
        for(size_t i = 0; i < grid.size(); i++)
        {
            for(size_t j=0; j<grid[i].size(); j++)
            {
                currSum += grid[i][j];
                totalSum += grid[i][j];
            }
            horSums.push_back(currSum);
            currSum = 0;
        }
        if (totalSum % 2 == 1) return false;
        long halfSum = totalSum/2;
        for(size_t i = 0; i < horSums.size(); i++)
        {
            currSum += horSums[i];
            if(currSum > halfSum) break;
            else if(currSum == halfSum) return true;
        }
        currSum = 0;
        for(size_t j = 0; j < grid[0].size(); j++)
        {
            for(size_t i = 0; i < grid.size(); i++)
            {
                currSum += grid[i][j];
            }
            if(currSum > halfSum) return false;
            else if(currSum == halfSum) return true;
        }
        return false;
    }
};
