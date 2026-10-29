class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int result = words.size();
        for(int i = 0; i< words.size(); i++)
        {
            if(words[i] == target) result = min(result,
            min(abs(i-startIndex),int(words.size())-abs(i-startIndex))
            );
        }
        if (result == words.size()) return -1;
        else return result;
    }
};