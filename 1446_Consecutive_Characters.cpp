class Solution {
public:
    int maxPower(string s) {
        int result = 1;
        int streak = 1;
        for(size_t i = 1; i < s.length(); i++)
        {
            if(s[i] == s[i-1]) streak++;
            else
            {
                result = max(result,streak);
                streak = 1;
            }
        }
        return max(result,streak);
    }
};