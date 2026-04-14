class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> lastRow;
        lastRow.push_back(1);
        if(numRows == 1)
        {
            result.push_back(lastRow);
            return result;
        }
        else
        {
            result = generate(numRows - 1);
            for(size_t i = 0; i< result[numRows-2].size()-1; i++)
            {
                lastRow.push_back(result[numRows-2][i]+result[numRows-2][i+1]);
            }
            lastRow.push_back(1);
            result.push_back(lastRow);
        }
        return result;
    }
};
