class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        int pattern = 0;
        if(numRows < 3) pattern = numRows;
        else pattern = numRows*2-2;
        for(size_t i =0; i< numRows; i++)
        {
            for(size_t j = 0; j< s.length(); j++)
            {
                if(j%pattern == i) result += s[j];
                if(j%pattern== pattern-i && i != numRows-1) result += s[j];
            }
        }
        return result;
    }
};
