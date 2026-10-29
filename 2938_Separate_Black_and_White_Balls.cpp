class Solution {
public:
    long long minimumSteps(string s) {
        long long open = 0;
        long long sum = 0;
        for(long long i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            {
                sum += i-open;
                open++;
            }
        }
        return sum;
    }
};