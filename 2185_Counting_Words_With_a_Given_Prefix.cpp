class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int psize = pref.length();
        int count = 0;
        for(size_t i = 0; i< words.size(); i++)
        {
            if(pref == words[i].substr(0,psize)) count++;
        }
        return count;
    }
};
