class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result = {1,0};
        int num = 0;
        for(char c : s)
        {
            num = c-'a';
            if(result[1]+widths[num] >100)
            {
                result[0]++;
                result[1] = widths[num];
            }
            else result[1]+= widths[num];
        }
        return result;   
    }
};