class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        for(size_t i = 0; i<nums.size(); i++)
        {
            if(i%2==0) evens.push_back(nums[i]);
            else odds.push_back(nums[i]);
        }
        sort(evens.begin(),evens.end());
        sort(odds.begin(),odds.end(), greater<>());
        vector<int> result;
        for(size_t i = 0; i< odds.size(); i++)
        {
            result.push_back(evens[i]);
            result.push_back(odds[i]);
        }
        if(evens.size()>odds.size()) result.push_back(evens[odds.size()]);
        return result;
    }
};