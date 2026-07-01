class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<bool> letters(26,false);
        int index = 0;
        for(size_t i = 0; i<s.length();i++)
        {
            index = s[i]-'a';
            letters[index] = !letters[index];
        }
        int counter = 0;
        for(size_t i = 0; i<letters.size();i++)
        {
            if(letters[i]) counter++;
        }
        return (counter < 2);
    }
};